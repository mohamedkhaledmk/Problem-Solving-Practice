#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int l = 0, r = n - 1, totalL = 0, totalR = 0;
        int ans = 0;
        // if (n == 2)
        // {
        //     if (v[0] == v[1])
        //         ans = 2;
        // }
        // else
        while (l <= r)
        {
            if (totalL > totalR)
            {
                totalR += v[r];
                r--;
                // cout << "l";
            }
            if (totalR > totalL)
            {
                // cout << "r";
                totalL += v[l];
                l++;
            }
            if (totalL == totalR)
            {
                totalL += v[l];
                ans = l + (n - 1 - r);
                l++;
                // cout << "eq" << l << r << "  " << totalL << " " << totalR << endl;
            }
        }

        cout << ans << endl;
    }
    return 0;
}