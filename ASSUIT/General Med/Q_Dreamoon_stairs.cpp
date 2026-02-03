#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n < m)
    {
        cout << -1;
    }
    else
    {
        for (int i = (n + 1) / 2; i <= n; i++)
        {
            if (i % m == 0)
            {
                cout << i;
                return 0;
            }
        }
    }
    // cout << -1;
    return 0;
}