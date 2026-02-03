#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        vector<int> freq(101, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }
        int cnt = 0, mxCnt = 0;
        for (int i = 100; i > 0; i--)
        {
            int c = 0;
            for (int j = i - 1; j > i / 2; j--)
            {
                c += min(freq[i - j], freq[j]);
            }
            if (i % 2 == 0)
            {
                c += (freq[i / 2] / 2);
            }
            mxCnt = max(c, mxCnt);
        }
        cout << mxCnt << endl;
    }
    return 0;
}