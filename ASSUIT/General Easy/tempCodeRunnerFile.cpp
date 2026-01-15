#include <iostream>
#include <vector>
using namespace std;
#define ll long long

ll fib(int x, vector<ll> &fibo)
{
    if (x <= 2)
        return x - 1;
    else if (fibo[x] == -1)
    {
        fibo[x] = fib(x - 1, fibo) + fib(x - 2, fibo);
        return fibo[x];
    }
    else
    {
        return fibo[x];
    }
}
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<ll> fibonnaci(n + 1, -1);
        ll x = fib(n, fibonnaci);
        cout << (isPrime(x) ? "prime" : "not prime") << endl;
    }
    return 0;
}