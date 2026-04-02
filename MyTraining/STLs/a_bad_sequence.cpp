#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <stack>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n];
    stack<char> s;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n % 2 != 0)
    {
        cout << "No";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '(')
        {
            s.push('(');
        }
        else if (!s.empty())
        {
            s.pop();
        }
        else if (flag)
        {
            flag = false;
        }
        else
        {
            cout << "No";
            return 0;
        }
    }
    if (s.empty() || (!flag && s.size() == 1))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}