#include <iostream>
#define ll long long
using namespace std;

bool valid(ll mid, ll &n, int k)
{
    ll po = k;
    ll sum = mid;
    while (mid / po != 0)
    {
        sum += mid / po;
        po *= k;
    }
    if (sum >= n)
        return true;
    return false;
}

int main()
{
    ll n;
    int k;
    cin >> n >> k;
    ll l = 0, r = n, mid;
    ll ans = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (valid(mid, n, k))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans;

    return 0;
}