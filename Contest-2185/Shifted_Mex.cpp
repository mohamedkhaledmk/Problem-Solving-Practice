#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n, 0);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        ll mxll = 0, llong = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i] - v[i - 1] <= 1)
            {
                if (v[i] != v[i - 1])
                    llong++;
            }
            else
            {
                mxll = max(mxll, llong);
                llong = 0;
            }
        }
        mxll = max(mxll, llong);
        cout << mxll + 1;
        cout << endl;
    }

    return 0;
}
