#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n *= 3;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = i + 1;
        }
        int l = 0, r = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (i % 3 == 0)
            {
                cout << v[l++] << " ";
            }
            else
            {
                cout << v[r--] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}