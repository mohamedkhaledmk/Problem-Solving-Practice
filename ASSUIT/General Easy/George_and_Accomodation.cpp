#include <iostream>

using namespace std;

int main()
{
    int n;
    int a, b;
    cin >> n;
    int ctr = 0;
    while (n--)
    {
        cin >> a >> b;
        if (b - a > 1)
            ctr++;
    }
    cout << ctr;

    return 0;
}