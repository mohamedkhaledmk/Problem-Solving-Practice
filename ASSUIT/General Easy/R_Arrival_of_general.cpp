#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int maxi = -1, mini = 101, minIdx = 0, maxIdx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > maxi)
        {
            maxi = x;
            maxIdx = i;
        }
        if (x <= mini)
        {
            mini = x;
            minIdx = i;
        }
    }
    int total = 0;
    if (minIdx < maxIdx)
        total--;
    total += maxIdx + (n - 1 - minIdx);
    cout << total;
    return 0;
}