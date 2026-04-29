#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, maxLength = 0;
        cin >> n;
        vector<string> vals(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vals[i];
            maxLength = max(maxLength, (int)vals[i].size());
        }
        vector<int> XORs(n, 0);
        for (int j = 0; j < maxLength; j++)
        {
            int onesCnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (vals[i][j] == '1')
                    onesCnt++;
            }
            if (onesCnt % 2 != 0)
                XORs[j] = 1;
        }
        for (auto &elem : XORs)
        {
            cout << elem << "  ";
        }
    }
    return 0;
}