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
    cin >> k >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int mini = 1000000;
    for (int i = k - 1; i < n; i++)
    {
        mini = min(mini, (v[i] - v[i - k + 1]));
    }
    cout << mini;
    return 0;
}