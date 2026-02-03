#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int r = n % 4;
    if (n <= 4)
    {
        long long res = (pow(8, n));
        cout << res % 10;
        return 0;
    }
    n = n % 4;
    long long res = pow(8, n + 4);
    cout << res % 10;
    return 0;
}