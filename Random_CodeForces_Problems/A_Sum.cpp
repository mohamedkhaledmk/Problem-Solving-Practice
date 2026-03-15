#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int maxi = max(a, max(b, c));
        int sum = a + b + c - maxi - maxi;
        if (sum)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}