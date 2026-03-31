#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int sum = 0;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] += v[i - 1];
    }

    int l = 0, r = 1, indices = 0;
    while (r <= n)
    {
        if (v[r] - v[l] <= k)
        {
            indices = max(indices, r - l);
            r++;
        }
        else
        {
            l++;
        }
    }

    cout << indices;
}