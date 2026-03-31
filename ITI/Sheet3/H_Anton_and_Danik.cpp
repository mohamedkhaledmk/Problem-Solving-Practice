#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char c;
    cin >> n;
    int a = 0, d = 0;
    while (n--)
    {
        cin >> c;
        if (c == 'A')
            a++;
        else
            d++;
    }
    if (a > d)
        cout << "Anton";
    else if (d > a)
        cout << "Danik";
    else
        cout << "Friendship";
}