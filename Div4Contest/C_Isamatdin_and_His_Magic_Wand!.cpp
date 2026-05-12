#include <bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool Parity = false;
        int mod = v[0] % 2;
        for (int i = 1; i < n; i++)
        {
            if (v[i] % 2 != mod)
            {
                Parity = true;
            }
        }
        if (Parity)
        {
            sort(v.begin(), v.end());
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}