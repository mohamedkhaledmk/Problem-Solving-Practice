#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long
int main()
{

    int x, y;
    cin >> x >> y;
    int l, r, cnt = y;
    vector<bool> v(y, true);
    for (int i = 0; i < x; i++)
    {
        cin >> l >> r;
        for (int i = l; i <= r; i++)
        {
            if (v[i - 1])
                cnt--;
            v[i - 1] = false;
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < y; i++)
    {
        if (v[i])
            cout << i + 1 << " ";
    }
    return 0;
}