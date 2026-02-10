#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <deque>
#include <stack>
#include <limits>

#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    deque<int> d;
    for (int i = s.size(); i > 0; i--)
    {
        if (s[i - 1] == 'l')
        {
            d.push_back(i);
        }
        else
        {
            d.push_front(i);
        }
    }
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << endl;
    }

    return 0;
}