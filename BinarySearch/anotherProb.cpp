#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n;
        vector<ll> v(n + 1, 0);
        vector<bool> v2(n + 1, false);
        vector<ll> pre(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i];
            if (v[i] < i)
            {
                v2[i] = true;
            }
            pre[i] = (v2[i] ? 1 : 0) + pre[i - 1];
        }
        ll cnt = 0;
        for (ll i = 2; i < v.size(); i++)
        {
            if (v2[i] && v[i] > 0)
            {
                cnt += pre[v[i] - 1];
            }
        }
        cout << cnt << endl;
    }
    return 0;
}