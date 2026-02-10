#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v(25, vector<int>(n, 0));
        vector<int> freq(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[0][i];
            freq[v[0][i]]++;
        }
        for (int i = 1; i < 25; i++)
        {
            for (int j = 0; j < n; j++)
            {
                v[i][j] = freq[v[i - 1][j]];
            }
            freq = vector<int>(n + 1, 0);
            for (int j = 0; j < n; j++)
            {
                freq[v[i][j]]++;
            }
        }

        int q;
        cin >> q;
        while (q--)
        {
            int x, k;
            cin >> x >> k;
            if (k < 25)
            {
                cout << v[k][x - 1] << endl;
            }
            else
            {
                cout << v[24][x - 1] << endl;
            }
        }
    }
    return 0;
}