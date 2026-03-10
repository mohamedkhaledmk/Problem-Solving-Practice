#include <bits\stdc++.h>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char arr[n][m];
    bool check[n][m]{};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '*')
                check[i][j] = true;
        }
    }
    int cnt = 0;
    vector<vector<int>> v;
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < m - 1; j++)
        {
            if (arr[i][j] == '*')
            {
                int val = 1;
                while (i + val < n && j + val < m && i - val >= 0 && j - val >= 0 &&
                       arr[i - val][j] == '*' && arr[i + val][j] == '*' &&
                       arr[i][j + val] == '*' && arr[i][j - val] == '*')
                {
                    check[i - val][j] = false;
                    check[i + val][j] = false;
                    check[i][j - val] = false;
                    check[i][j + val] = false;
                    check[i][j] = false;
                    val++;
                }
                if (val > 1)
                {
                    v.push_back({i + 1, j + 1, val - 1});
                    cnt++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (check[i][j])
            {
                cout << -1;
                return 0;
            }
    cout << cnt << endl;
    for (auto &a : v)
    {
        cout << a[0] << " " << a[1] << " " << a[2] << endl;
    }

    return 0;
}