#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n, val;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        sum += val;
    }
    cout << fixed << setprecision(12) << (double)sum / n;
    return 0;
}