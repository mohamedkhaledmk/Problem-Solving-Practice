#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
#define ll long long

bool isPrime(const ll &n)
{
    bool flag = true;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool tPrime(long long n)
{
    if (n < 3)
        return false;
    ll x = sqrt(n);
    if (x * x == n && n % x == 0 && isPrime(x))
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        bool f = tPrime(n);
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}