#include <iostream>
#include <vector>
#include <stack>
#include <math.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(m);
        // vector<int> freq(m + 1, 0);
        int inconv = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
            // freq[v[i]] = 1;
            for (int j = 0; j < i; j++)
            {
                if (v[j] < v[i])
                    inconv++;
                // cout << i << endl;
            }
        }
        cout << inconv << endl;
    }
    return 0;
}