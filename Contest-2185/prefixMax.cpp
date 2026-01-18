#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v;
        int mini = 1e9, maxi = 0, sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> v;
            maxi = max(maxi, v);
        }
        cout << maxi * n << endl;
    }

    return 0;
}
