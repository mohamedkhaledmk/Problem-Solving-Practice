#include <bits/stdc++.h>
using namespace std;

bool can(double num, vector<double> &v)
{
    cout << "first num: " << num << "  " << num / v[0] << endl;
    for (int i = 0; i < v.size(); i++)
    {
        if (num / v[i] < 1)
            return false;
        num /= v[i];
        cout << num << " ";
    }
    return true;
}

int main()
{
    double n;
    cin >> n;
    vector<double> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    double l = 1, r = 100000, mid, ans = -1;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (can(mid, v))
        {
            r = mid - 1;
            ans = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "ans:" << ans;
    return 0;
}