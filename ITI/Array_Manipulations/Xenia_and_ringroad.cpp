#include <iostream>

using namespace std;
#define ll long long
int main()
{

    ll x, y, m, ans = 0, curr = 1;
    cin >> x >> y;
    for (ll i = 0; i < y; i++)
    {
        cin >> m;
        if (m > curr)
        {
            ans += m - curr;
        }
        else if (m < curr)
        {
            ans += (m) + (x - curr);
        }
        curr = m;
    }
    cout << ans;
    return 0;
}