#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int t, n, q;
    ll h1, h2, w1, w2;
    cin >> t;
    while (t--)
    {
        vector<vector<ll>> rect(1001, vector<ll>(1001, 0));
        cin >> n >> q;
        for (int i = 0; i < n; i++)
        {
            cin >> h1 >> w1;
            rect[h1][w1] += h1 * w1;
        }
        for (int i = 1; i < 1001; i++)
            for (int j = 1; j < 1001; j++)
                rect[i][j] += rect[i - 1][j] + rect[i][j - 1] - rect[i - 1][j - 1];

        for (int i = 0; i < q; i++)
        {
            ll sum = 0;
            cin >> h1 >> w1 >> h2 >> w2;
            sum = rect[h2 - 1][w2 - 1] - rect[h2 - 1][w1] - rect[h1][w2 - 1] + rect[h1][w1];
            cout << sum << endl;
        }
    }
    return 0;
}