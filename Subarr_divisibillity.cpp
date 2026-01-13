#include <iostream>

using namespace std;
#define ll long long

int main()
{
    ll sum = 0;
    int n;
    cin >> n;
    ll a, ans = 0;
    int freq[n]{};
    freq[0] = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
        ans += freq[((sum % n) + n) % n];
        freq[((sum % n) + n) % n]++;
    }
    cout << ans;
    return 0;
}