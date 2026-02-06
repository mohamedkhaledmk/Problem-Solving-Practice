#include <iostream>
#include <vector>
#include <stack>
#include <math.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (!st.empty() && st.top() == s[i])
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    if (st.empty())
        cout << "Yes";
    else
        cout << "No";
    return 0;
}