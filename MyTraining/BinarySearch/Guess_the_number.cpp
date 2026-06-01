#include <iostream>

using namespace std;
#define ll long long
int main()
{
    ll l = 0, r = 1e6, mid;
    string inp;
    ll ans = 0;
    for (int i = 0; i < 25 && l <= r; i++)
    {
        mid = l + (r - l) / 2;
        cout << mid << endl;
        cout << flush;
        cin >> inp;
        if (inp == ">=")
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    cout << "! " << ans;
    return 0;
}