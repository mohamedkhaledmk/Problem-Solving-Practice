#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 7, x, sum = 0, maxi = -1000;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum -= x;
            maxi = max(maxi, x);
        }
        cout << (sum + maxi + maxi) << endl;
    }
    return 0;
}