#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <queue>
#include <stack>
#define ll long long
using namespace std;

int find(vector<int> &vect, int start, int val)
{
    for (int i = start; i < vect.size(); i++)
    {
        if (vect[i] == val)
            return i;
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> vSorted(v);
        vector<vector<int>> result;
        sort(vSorted.begin(), vSorted.end());
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] != vSorted[i])
            {
                int idx = find(v, i, vSorted[i]);
                rotate(v.begin() + i, v.begin() + idx, v.begin() + idx + 1);
                // cout << i + 1 << " " << v.size() << " " << idx - i << endl;
                vector<int> temp;
                temp.push_back(i + 1);
                temp.push_back(idx + 1);
                temp.push_back(idx - i);
                result.push_back(temp);
            }
        }
        cout << result.size() << endl;
        for (int i = 0; i < result.size(); i++)
            cout << result[i][0] << " " << result[i][1] << " " << result[i][2] << endl;
        // for (int i = 0; i < v.size(); i++)
        //     cout << v[i] << " ";
    }
    return 0;
}