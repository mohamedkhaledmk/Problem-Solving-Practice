#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    vector<int> v(3);
    cin >> n;
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int res=0;
    for (int i = 0; i <= 4000; i++)
        for (int j = 0; j <= 4000; j++)
        {
            if ((n>=v[2]*i+v[1]*j)&& (n - v[2] * i - v[1] * j) % v[0] == 0)
            {
                // cout << " i " << i << " " << j << " " << (n - v[2] * i - v[1] * j) / v[0];
                res=max(res,i + j + (n - v[2] * i - v[1] * j) / v[0]);
            }
        }
    
        cout<<res;
    return 0;
}