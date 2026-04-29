#include <bits\stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
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
        int n, idx = 0;
        cin >> n;
        vector<ll> values(n + 1);
        values[idx++] = 2;
        while (idx <= n)
        {
            ll num = values[idx - 1];
            // cout << num;
            while (!isPrime(++num))
                continue;
            // cout << num;
            values[idx++] = num;
        }
        for (ll i = 0; i < n; i++)
        {
            cout << values[i] * values[i + 1] << " ";
        }
        cout << endl;
    }
    return 0;
}