#include <iostream>
#include <vector>
using namespace std;

bool can(int x, vector<int> &v, vector<int> &ingredients, int k)
{
    for (int i = 0; i < v.size(); i++)
    {
        int val = ingredients[i] / v[i];
        if (val < x)
        {
            int diff = x - val;
            k -= x * v[i] - ingredients[i];
            if (k < 0)
                return false;
        }
    }
    return true;
}

int main()
{
    int n, k, maxi = 0;
    cin >> n >> k;
    vector<int> v(n, 0);
    vector<int> ingredients(n, 0);
    for (auto &x : v)
        cin >> x;
    for (auto &x : ingredients)
    {
        cin >> x;
        maxi = max(maxi, x);
    }

    int l = 0, r = maxi + k, mid;
    int ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (can(mid, v, ingredients, k))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans;
    return 0;
}