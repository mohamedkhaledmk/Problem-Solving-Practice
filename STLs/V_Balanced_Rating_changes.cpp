#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <queue>
#include <stack>
#define ll long long
using namespace std;

bool fun(int st, string s)
{
    // cout << st << s << "Alo" << endl;
    if (st <= 2)
        return false;
    else
    {
        if (s[st] != s[st - 2])
            return true;
        if (s[st] == s[st - 3] && s[st - 3] == s[st - 2])
        {
            return true;
        }
    }
    // cout << "SS" << endl;
    return false;
}

int main()
// {
//     int n;
//     cin >> n;
//     vector<string> v(n);
//     string s, s1;
//     cin >> s;
//     int cntLeft = 1, cntRight = 0;
//     for (int i = 1; i < n; i++)
//     {
//         string s2;
//         cin >> s2;
//         if (s2 == s)
//             cntLeft++;
//         else
//         {
//             cntRight++;
//             s1 = s2;
//         }
//     }
//     if (cntLeft > cntRight)
//         cout << s;
//     else
//         cout << s1;

//     return 0;
// }
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int freq[26][26]{};
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            // cout << s[i - 1] << " " << s[i] << " " << freq[s[i - 1] - 'a'][s[i] - 'a'] << endl;
            if ((freq[s[i - 1] - 'a'][s[i] - 'a'] > 0))
            {
                if (s[i] != s[i - 1] || (s[i] == s[i - 1] && fun(i, s)))
                {
                    // cout << "Ss";
                    flag = true;
                    break;
                }
            }
            else
            {
                freq[s[i - 1] - 'a'][s[i] - 'a']++;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}