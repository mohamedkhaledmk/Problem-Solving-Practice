#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long

bool can(int val, vector<int> &studs)
{

    for (int i = val - 1; i < studs.size(); i++)
    {
        // cout << studs[i - 1] << " : " << studs[i - val] << " , val : " << val << endl;
        if (studs[i] - studs[i - val + 1] <= 5)
        {
            return true;
        }
    }
    return false;
}

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

    int l = 1, r = n, mid, ans = 1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (can(mid, v))
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;
    return 0;
}