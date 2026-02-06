#include <iostream>
#include <vector>
#include <stack>
#include <map>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> freq;
    bool flag = true;
    int totalNums = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
        if (freq[v[i]] == 1)
            totalNums++;
        else if (freq[v[i]] > 2)
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
        cout << totalNums << endl;
        for (auto &i : freq)
        {
            // cout << i.first << " ss" << i.second << endl;
            if (i.second > 0)
            {
                cout << i.first << " ";
                i.second--;
            }
        }
        cout << endl
             << n - totalNums << endl;
        for (auto it = freq.rbegin(); it != freq.rend(); it++)
        {
            if (it->second > 0)
            {
                cout << it->first << " ";
                it->second--;
            }
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}