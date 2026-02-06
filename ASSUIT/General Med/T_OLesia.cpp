#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    long long n1, n2;
    cin >> n1 >> n2;
    if (n1 == 1 && n2 == 10)
    {
        cout << -1;
        return 0;
    }
    if (n2 == 10)
    {
        cout << 1;
        while (--n1)
            cout << 0;
        return 0;
    }
    // n1 = pow(10, n1 - 1);
    while (n1--)
    {
        cout << n2;
    }
    // cout << n1;

    return 0;
}