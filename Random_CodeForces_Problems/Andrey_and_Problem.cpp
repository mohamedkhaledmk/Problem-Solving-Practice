#include <bits\stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    double prob1 = 0, prob0 = 1;
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i++)
    {
        if (prob1 < prob0)
        {
            prob1 = (1 - v[i]) * prob1 + prob0 * v[i];
            prob0 *= 1 - v[i];
        }
    }
    cout << fixed << setprecision(12) << prob1;
    return 0;
}