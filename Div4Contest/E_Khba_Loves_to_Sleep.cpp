#include <bits\stdc++.h>
#include <numeric>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        vector<pair<int, int>> result;
        for (int i = 0; i <= m; i++)
        {
            int idx = lower_bound(v.begin(), v.end(), i) - v.begin(); // log(n)
            int mini;
            if (idx != n - 1)
                mini = min(v[idx] - i, v[idx + 1] - i);
            else
                mini = v[idx];
            result.push_back(make_pair(mini, i));
        }
        sort(result.rbegin(), result.rend());
        for (int i = 0; i < k; i++)
        {
            cout << result[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}