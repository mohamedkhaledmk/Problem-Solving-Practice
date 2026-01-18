#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, h;
        cin >> n >> m >> h;
        vector<ll> v(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<ll> orig(v);
        vector<pair<ll, ll>> ops;
        ll start = 0;
        for (ll i = 0; i < m; i++)
        {
            ll x, y;
            cin >> x >> y;
            if (v[x] + y > h)
                start = i;
            ops.push_back(make_pair(x, y));
        }
        for (ll i = start; i < m; i++)
        {
            v[ops[i].first] += ops[i].second;
            if (v[ops[i].first] > h)
            {
                v = orig;
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
