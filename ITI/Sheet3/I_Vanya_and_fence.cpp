#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int val, counter = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (val > k)
            counter++;
    }
    cout << counter + n;
}