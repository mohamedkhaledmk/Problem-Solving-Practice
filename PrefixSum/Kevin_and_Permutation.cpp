#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, n, p;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
                cout << i;
            else
                cout << (n + 1) - i;
        }
    }
    return 0;
}