#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, zeroCnt = 0;
        cin >> n;
        int arr[n]{};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                zeroCnt++;
        }
        int current = 0, longest = zeroCnt, currLongest = 0, curr, last;
        map<int, vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                continue;
            m[arr[i]].push_back(i);
        }
        for (auto elem : m)
        {
            int vSize = elem.second.size();
            int l = 0, r = 0;
            for (int i = 0; i < vSize; i++)
            {
                // cout << "Ss:" << elem.first << " : " << elem.second[i] << endl;
            }
            while (r < vSize)
            {
                if (elem.second[r] - elem.second[l] <= zeroCnt + 1)
                {
                    cout << "Ss2:" << elem.first << " : " << elem.second[l] << " R:" << elem.second[r] << endl;
                    longest = max(longest, (elem.second[r] - elem.second[l] + 2 + (zeroCnt - elem.second[r] + elem.second[l])));
                }
                else
                {
                    l++;
                }
                r++;
            }
        }
        cout << longest << endl;
    }

    return 0;
}