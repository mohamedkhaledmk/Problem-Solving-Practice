#include <iostream>
#include <vector>
#include <algorithm>
// #include <priority_queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sum1 = 0, sum2 = 0;
    int l = 0, r = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            sum2 += max(v[l], v[r]);
        }
        else
        {
            sum1 += max(v[l], v[r]);
        }
        if (v[l] > v[r])
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    cout << sum1 << " " << sum2;
    return 0;
}