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
    map<int, int> freq;
    int cnt = 0, mxCnt = 0;
    while (n--)
    {
        int x;
        cin >> x;
        // mxCnt = max(mxCnt, freq[x]);
        if (freq[x])
            mxCnt++;
        freq[x]++;
    }
    if (mxCnt)
        cout << mxCnt;
    else
        cout << -1;
    return 0;
}