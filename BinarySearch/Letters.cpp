#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define INF 1e9

int main()
{
    int n, m;
    cin >> n >> m;
    vector<ll> prefix(n + 1, 0);
    // vector<ll> entries(m + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> prefix[i];
        prefix[i] += prefix[i - 1];
    }
    for (int i = 1; i <= m; i++)
    {
        ll inp;
        cin >> inp;
        auto it = lower_bound(prefix.begin(), prefix.end(), inp);
        // cout << "dist" << distance(it, prefix.begin());
        ll diff = it - prefix.begin();
        cout << diff << " " << inp - prefix[diff - 1] << endl;
    }
    return 0;
}
