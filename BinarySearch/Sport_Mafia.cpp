
#include <iostream>
#include <vector>
using namespace std;
#define ll long long

bool can(ll eaten, ll moves, ll remaining)
{
    ll i = moves - eaten;
    ll goal = eaten + remaining, candies = (i * (i + 1)) / 2;
    if (candies >= goal)
        return true;
    else
        return false;
}

int main()
{

    ll x, y, ans = 0;
    cin >> x >> y;
    ll l = 0, r = x, mid;

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
    cout << ans;
    return 0;
}
