#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << n;
    }
    else
    {
        int x = abs(n % 10);
        int y = abs((n % 100) / 10);
        if (x > y)
        {
            n /= 10;
        }
        else
        {
            (n = n / 100);
            (n *= 10);

            n -= x;
        }
        cout << n;
    }
    return 0;
}