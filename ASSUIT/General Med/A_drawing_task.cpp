#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<char>> v(n, vector<char>(m, '.'));
    for (int i = 0; i < q; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        char c;
        cin >> c;
        for (int i = min(x1, x2); i <= max(x1, x2); i++)
            for (int j = min(y1, y2); j <= max(y1, y2); j++)
            {
                v[i - 1][j - 1] = c;
            }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }

    return 0;
}