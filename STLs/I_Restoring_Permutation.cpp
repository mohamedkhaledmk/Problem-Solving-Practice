#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <queue>
#include <stack>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> freq(201, 0);
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]] = 1;
        }
        bool flag;
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            flag = false;
            for (int j = v[i] + 1; j <= 2 * n; j++)
            {
                // cout << j << " " << freq[j] << "S";
                if (freq[j] == 0)
                {
                    q.push(j);
                    flag = true;
                    freq[j] = -1;
                    break;
                    // cout << "S";
                }
            }
            if (!flag)
            {
                break;
            }
        }
        if (flag)
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " " << q.front() << " ";
                q.pop();
            }
        else
        {
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}