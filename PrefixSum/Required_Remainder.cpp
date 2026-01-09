#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> partial(n + 2, 0);
    ll x, y;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    while (q--)
    {
        cin >> x >> y;
        partial[x] += 1;
        partial[y + 1] -= 1;
    }
    for (ll i = 1; i < n + 2; i++)
    {
        partial[i] += partial[i - 1];
    }
    sort(partial.begin(), partial.end(), greater<int>());
    sort(v.begin(), v.end(), greater<int>());
    unsigned long long sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i] * partial[i];
    }
    cout << sum;
    return 0;
}