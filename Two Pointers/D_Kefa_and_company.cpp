#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int t, minAmount;
    cin >> t >> minAmount;
    vector<pair<int, int>> v(t);
    long long sum = 0, maxSum = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int l = 0, r = 0;
    while (r < t)
    {
        if (v[r].first - v[l].first < minAmount)
        {
            sum += v[r].second;
            r++;
        }
        else
        {
            while (v[r].first - v[l].first >= minAmount)
            {
                sum -= v[l].second;
                l++;
            }
            // sum += v[r].second;
        }
        maxSum = max(sum, maxSum);
    }
    maxSum = max(sum, maxSum);

    cout << maxSum;
    return 0;
}