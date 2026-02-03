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
    string s;
    cin >> s;
    int x = s.size(), cnt = 0;
    char c = s[0];
    bool flag = true;
    for (int i = 0; i < x / 2; i++)
    {
        if (s[i] != s[x - 1 - i])
        {
            flag = false;
        }
    }
    if (!flag)
    {
        cout << x;
    }
    else
    {
        while (s[cnt++] == c)
        {
            if (cnt == x)
            {
                cout << 0;
                return 0;
            }
            // else
            //     break;
        }
        cout << x - 1;
    }
    return 0;
}