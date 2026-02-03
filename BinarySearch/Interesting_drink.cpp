#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long
int main()
{
    int n, q;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cin >> q;
    while (q--)
    {
        int val;
        cin >> val;
        auto it = upper_bound(v.begin(), v.end(), val) - v.begin();
        cout << it << endl;
    }
    return 0;
}