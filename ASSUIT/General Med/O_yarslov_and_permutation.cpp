#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int freq[1001]{};
    int mxFreq = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
        mxFreq = max(mxFreq, freq[arr[i]]);
    }
    bool flag = true;
    if (mxFreq > (n + 1) / 2)
        flag = false;
    cout << (flag ? "YES" : "NO");

    return 0;
}