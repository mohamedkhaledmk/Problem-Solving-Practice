#include <iostream>
#include <vector>
using namespace std;
#define ll long long

bool can(ll x, vector<ll> &v, vector<ll> &ingredients, ll k)
{
    for (ll i = 0; i < v.size(); i++)
    {
        ll val = ingredients[i] / v[i];
        if (val < x)
        {
            ll diff = x - val;
            k -= x * v[i] - ingredients[i];
            if (k < 0)
                return false;
        }
    }
    return true;
}

int main()
{
    ll n, k, maxi = 0;
    cin >> n >> k;
    vector<ll> v(n, 0);
    vector<ll> ingredients(n, 0);
    for (auto &x : v)
        cin >> x;
    for (auto &x : ingredients)
    {
        cin >> x;
        maxi = max(maxi, x);
    }

    ll l = 0, r = maxi + k, mid;
    ll ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (can(mid, v, ingredients, k))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans;
    return 0;
}