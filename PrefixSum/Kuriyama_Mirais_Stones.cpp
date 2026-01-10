#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<ll> v(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> prefix1(n + 2, 0);
    vector<ll> prefix2(n + 2, 0);
    for (int i = 1; i < n + 1; i++)
    {
        prefix1[i] = v[i - 1];
        prefix1[i] += prefix1[i - 1];
    }
    int q, x, y, z;
    cin >> q;
    sort(v.begin(), v.end());
    for (int i = 1; i < n + 1; i++)
    {
        prefix2[i] = v[i - 1];
        prefix2[i] += prefix2[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> x >> y >> z;
        if (x == 1)
        {
            cout << prefix1[z] - prefix1[y - 1] << endl;
        }
        if (x == 2)
        {
            cout << prefix2[z] - prefix2[y - 1] << endl;
        }
    }

    return 0;
}