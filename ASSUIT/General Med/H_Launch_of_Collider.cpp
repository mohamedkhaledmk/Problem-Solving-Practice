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
    int n;
    cin >> n;
    string w;
    cin >> w;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mini = 1e9;
    for (int i = 1; i < n; i++)
    {
        if (w[i] == 'L' && w[i - 1] == 'R')
        {
            mini = min(mini, (arr[i] - arr[i - 1]) / 2);
        }
    }
    if (mini == 1e9)
        cout << -1;
    else
        cout << mini;
    return 0;
}