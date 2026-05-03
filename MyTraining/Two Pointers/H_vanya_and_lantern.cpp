#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <iomanip>

#define ll long long
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int rDist = k - v[n - 1], lDist = v[0];
    double maxi = max(rDist, lDist);
    double r = 1;
    while (r < n)
    {
        // cout << v[r] << " " << v[r - 1] << endl;
        maxi = max(maxi, (v[r] - v[r - 1]) / 2.0);
        r++;
    }
    cout << fixed << setprecision(10) << maxi;
    return 0;
}