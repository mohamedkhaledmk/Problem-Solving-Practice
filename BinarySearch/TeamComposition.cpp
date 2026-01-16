#include <iostream>

using namespace std;
#define ll long long

bool can(ll n, ll &x, ll &y)
{
    if (n * 4 <= x + y && n <= x && n <= y)
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll l = 0, r = x + y, mid, ans = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (can(mid, x, y))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}