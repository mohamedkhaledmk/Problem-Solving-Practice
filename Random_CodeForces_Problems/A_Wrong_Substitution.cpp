#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    while (k > 0)
    {
        int r = n % 10;
        if (r == 0)
        {
            n /= 10;
            k--;
        }
        else if (k <= r)
        {
            n -= k;
            k = 0;
        }
        else
        {
            k -= r;
            n -= r;
        }
    }
    cout << n;
    return 0;
}