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
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // sort(v.begin(), v.end());
        ll mini = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            ll l = 2, r = 1e18;
            for (ll j = 2; j < 1e18; j++)
            {
                if (__gcd(v[i], j) == 1)
                {
                    mini = min(mini, j);
                    break;
                }
            }
        }

        cout << ((mini < LLONG_MAX) ? mini : -1) << endl;
    }
    return 0;
}