#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long res = (pow(8, n % 10));
    cout << res % 10;
    return 0;
}