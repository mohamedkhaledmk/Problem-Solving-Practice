#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> v;
    if (s1.size() != s2.size())
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            v.push_back(i);
        }
    }
    if (v.size() == 2)
    {
        swap(s1[v[0]], s1[v[1]]);
        cout << ((s2 == s1) ? "YES" : "NO");
    }
    else if (v.size() == 0)
    {
        set<char> st(s1.begin(), s1.end());
        cout << ((st.size() != s1.size()) ? "YES" : "NO");
    }
    else
    {
        cout << "NO";
    }
    return 0;
}