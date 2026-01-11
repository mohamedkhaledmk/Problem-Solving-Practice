#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int t, n, q, l, r, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        vector<int> v(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            v[i] = v[i] % 2;
            v[i] += v[i - 1];
        }
        for (int i = 1; i <= q; i++)
        {
            cin >> l >> r >> k;
            int x = v[n] - v[r];
            int y = v[l - 1];
            int tot = x + y + (k * ((r - l + 1) % 2));
            cout << (tot % 2 == 1 ? "YES" : "NO") << endl;
        }
    }

    return 0;
}