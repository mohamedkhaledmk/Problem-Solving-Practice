#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <stack>
#define ll long long
using namespace std;

bool comp(pair<string, int> a, pair<string, int> b)
{
    for (int i = 0; i < a.first.size(); i++)
    {
        if (a.first[i] > b.first[i])
        {
            return (i % 2 != 0);
        }
        else if (a.first[i] < b.first[i])
        {
            return (i % 2 == 0);
        }
    }
    return true;
}

int main()
{
    int x, y;
    cin >> x >> y;
    vector<pair<string, int>> v(x);

    for (int i = 0; i < x; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end(), comp);
    for (int i = 0; i < x; i++)
    {
        cout << v[i].second << endl;
    }
    return 0;
}