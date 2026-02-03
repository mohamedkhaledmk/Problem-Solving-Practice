#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
    int p, cases;
    cin >> p >> cases;
    vector<pair<int, int>> v;
    while (cases--)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        if (p > v[i].first)
        {
            p += v[i].second;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}