#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ncities, ntowers;
    cin >> ncities >> ntowers;
    vector<int> cities(ncities), towers(ntowers);
    for (int i = 0; i < ncities; i++)
        cin >> cities[i];
    for (int i = 0; i < ntowers; i++)
        cin >> towers[i];
    int l = 0, r = 2e9, ans = 2e9, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        bool flag = true;
        for (int i = 0; i < ncities; i++)
        {
            int idx = lower_bound(towers.begin(), towers.end(), cities[i]) - towers.begin();

            if ((idx < ntowers && abs(towers[idx] - cities[i]) <= mid) || (idx > 0 && abs(towers[idx - 1] - cities[i]) <= mid))
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}