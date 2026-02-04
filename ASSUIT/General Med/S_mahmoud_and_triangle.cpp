#include <iostream>
#include <vector>
#include <algorithm>
// #include <priority_queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < n - 2; i++)
    {
        if (v[i] + v[i + 1] > v[i + 2] && v[i] + v[i + 2] > v[i + 1] && v[i + 1] + v[i + 2] > v[i])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}