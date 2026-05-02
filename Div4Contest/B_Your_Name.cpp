#include <bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int freq1[26]{}, freq2[26]{};
        char c;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            freq1[c - 'a']++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            freq2[c - 'a']++;
        }
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (freq1[i] != freq2[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}