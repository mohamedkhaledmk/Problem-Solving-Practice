#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

#define ll long long
#define INF 1e9

int main()
{
    int t;
    cin >> t;
    vector<ll> nums(1e4 + 1);
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = pow((i + 1), 3);
    }
    while (t--)
    {
        ll num;
        cin >> num;
        ll l = 0, r = 1e12;
        bool flag = false;
        for (int i = 0; i < nums.size(); i++)
        {
            auto it1 = lower_bound(nums.begin(), nums.end(), num - nums[i]);
            if (*it1 == num - nums[i])
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        // auto it1 = lower_bound(nums.begin(), nums.end(), num);
        // if (it1 != nums.begin())
        //     it1--;
        // cout << "it1 " << *it1 << endl;
        // auto it2 = lower_bound(nums.begin(), nums.end(), num - *it1);
        // cout << "it2 " << *it2 << endl;
        // if (*it2 == (num - *it1))
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
    }
    return 0;
}
