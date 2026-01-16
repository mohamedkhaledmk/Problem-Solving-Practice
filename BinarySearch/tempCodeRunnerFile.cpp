#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    vector<ll> v1(n);
    vector<ll> v2(m);
    for (auto &x : v1)
        cin >> x;
    for (auto &y : v2)
        cin >> y;

    sort(v1.begin(), v1.end());

    for (auto &val : v2)
    {
        int l = 0, r = n, mid;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (val > v1[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        // r = upper_bound(v1.begin(), v1.end(), val) - v1.begin();
        cout << r + 1 << " ";
    }

    return 0;
}