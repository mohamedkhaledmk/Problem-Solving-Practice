#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#define ll long long
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int l = 0, r = 0, cnt = 0, maxCnt = 0, flaggedIdx = 0, variedK = k, cont = 0;
    while (r < n)
    {
        // if (!v[r])
        // {
        //     if (variedK)
        //     {
        //         if (variedK == k)
        //             cont = r;
        //         r++;
        //         cnt++;
        //         variedK--;
        //     }
        //     else
        //     {
        //         variedK = k;

        //         cnt = 0;
        //         // while (v[l] && l <= r)
        //         // {
        //         //     l++;
        //         // }
        //         r = l = ++cont;
        //     }
        // }
        // else
        // {
        //     cnt++;
        //     // flaggedIdx = r;
        //     r++;
        // }
        //
        if (v[r++] == 0)
            cont++;
        while (cont > k)
        {
            if (v[l++] == 0)
                cont--;
            cnt--;
        }
        cnt = (r - l);
        if ((cnt) > maxCnt)
        {
            flaggedIdx = l;
            maxCnt = cnt;
            // cout << "index : " << l << endl;
        }
        // maxCnt = max(cnt, maxCnt);
    }
    cout << maxCnt << endl;
    // << " " << flaggedIdx;
    for (int i = 0; i < n; i++)
    {
        if (i >= flaggedIdx && k)
        {
            if (v[i])
            {
                cout << v[i] << " ";
            }
            else
            {
                cout << 1 << " ";
                k--;
            }
        }
        else
        {
            cout << v[i] << " ";
        }
    }
    return 0;
}