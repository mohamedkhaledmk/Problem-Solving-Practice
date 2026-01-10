#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(n, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int x, y, z;
    vector<vector<int>> ops(m, vector<int>(3, 0));
    vector<ll> partial(n + 2, 0);
    vector<ll> queries(m + 2, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y >> z;
        ops[i][0] = x;
        ops[i][1] = y;
        ops[i][2] = z;
    }
    for (int i = 0; i < k; i++)
    {
        cin >> y >> z;
        queries[y]++;
        queries[z + 1]--;
    }
    for (int i = 1; i < m + 2; i++)
    {
        queries[i] += queries[i - 1];
    }
    for (int i = 0; i < m; i++)
    {
        partial[ops[i][0]] += ops[i][2] * queries[i + 1];
        partial[ops[i][1] + 1] -= ops[i][2] * queries[i + 1];
    }
    for (int i = 1; i < n + 2; i++)
    {
        partial[i] += partial[i - 1];
    }
    for (int i = 0; i < n; i++)
        cout << v[i] + partial[i + 1] << " ";
    return 0;
}