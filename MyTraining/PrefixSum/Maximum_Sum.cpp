#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> arr(n, 0);
        vector<ll> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        for (int i = 1; i <= n; i++)
        {
            prefix[i] = arr[i - 1];
            prefix[i] += prefix[i - 1];
        }
        ll j = 2, end = n, total = 0;
        for (int i = 0; i <= k; i++)
        {
            ll first = prefix[end] - prefix[end - k + i];
            ll second = prefix[i * 2];
            ll remaining = prefix[end] - (first + second);
            total = max(total, remaining);
        }
        // cout << "end : " << end << "  j  " << j << endl;
        cout << total << endl;
    }

    return 0;
}