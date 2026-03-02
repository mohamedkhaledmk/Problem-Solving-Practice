#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] += v[i - 1];
    }
    int mini = 2e9, minIdx = 1;
    for (int i = 1; i <= n - k + 1; i++)
    {
        if (v[i + k - 1] - v[i - 1] < mini)
        {
            mini = v[i + k - 1] - v[i - 1];
            minIdx = i;
        }
    }
    cout << minIdx;
}