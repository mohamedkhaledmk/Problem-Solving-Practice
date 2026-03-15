#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n, val;
    cin >> n;
    int sum = 0;
    while (n--)
    {
        cin >> val;
        sum += val;
    }
    cout << (double)sum / n;
    return 0;
}