#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<int> values(n);
    cin >> values[0];
    for (int i = 1; i < n; i++)
    {
        cin >> values[i];
        values[i] += values[i - 1];
    }
    cin >> m;
    int num;
    for (int i = 0; i < m; i++)
    {
        cin >> num;
        int idx = lower_bound(values.begin(), values.end(), num) - values.begin();
        cout << idx + 1 << endl;
    }

    return 0;
}