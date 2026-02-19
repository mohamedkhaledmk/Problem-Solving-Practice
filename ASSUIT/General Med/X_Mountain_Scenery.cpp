#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(2 * n + 1);
    for (int i = 0; i < 2 * n + 1; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < 2 * n + 1; i++)
    {
        if (i % 2 != 0)
        {
            if (v[i] <= v[i - 1])
            {
                v[i] = v[i - 1] + 1;
            }
            if (v[i] <= v[i + 1])
                v[i] = v[i + 1] + 1;
        }
    }
    for (int i = 0; i < 2 * n + 1; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}