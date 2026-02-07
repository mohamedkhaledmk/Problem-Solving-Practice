#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <queue>
#include <stack>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    string s, s1;
    cin >> s;
    int cntLeft = 1, cntRight = 0;
    for (int i = 1; i < n; i++)
    {
        string s2;
        cin >> s2;
        if (s2 == s)
            cntLeft++;
        else
        {
            cntRight++;
            s1 = s2;
        }
    }
    if (cntLeft > cntRight)
        cout << s;
    else
        cout << s1;

    return 0;
}