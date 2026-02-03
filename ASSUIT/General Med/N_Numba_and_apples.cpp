#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> arr(n, vector<int>(m));
    vector<int> rows(n), cols(m);

    iota(rows.begin(), rows.end(), 0);
    iota(cols.begin(), cols.end(), 0);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    while (k--)
    {
        char c;
        int x, y;
        cin >> c >> x >> y;
        --x;
        --y;

        if (c == 'g')
            cout << arr[rows[x]][cols[y]] << '\n';
        else if (c == 'r')
            swap(rows[x], rows[y]);
        else
            swap(cols[x], cols[y]);
    }
}
