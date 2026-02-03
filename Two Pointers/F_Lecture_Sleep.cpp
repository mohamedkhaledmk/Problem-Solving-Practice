#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    long long mins, awake, initSum = 0;
    cin >> mins >> awake;
    vector<long long> v(mins);
    vector<long long> p(mins + 1, 0);
    vector<long long> a(mins);
    for (long long i = 0; i < mins; i++)
    {
        cin >> v[i];
    }
    for (long long i = 0; i < mins; i++)
    {
        cin >> a[i];
        if (a[i])
        {
            initSum += v[i];
        }
        else
        {
            p[i + 1] = v[i];
        }
        p[i + 1] += p[i];
    }
    // cout << initSum << endl;
    // while (mins--)
    //     cout << p[mins] << endl;
    long long l = 0, r = 0, sum = 0, maxSum = initSum;
    while (r < mins)
    {
        sum = 0;
        if (!a[r])
        {
            if (r + awake <= mins)
            {
                sum += p[r + awake] - p[r];
            }
            else
            {
                sum += p[mins] - p[r];
            }
            maxSum = max(maxSum, sum + initSum);
        }
        r++;
    }
    cout << maxSum;

    return 0;
}