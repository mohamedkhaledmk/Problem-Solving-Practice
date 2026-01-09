#include <iostream>

using namespace std;

int main()
{
    int n, x, y, num;
    cin >> n;
    while (n--)
    {
        cin >> x >> y >> num;
        while (num % x != y)
        {
            num--;
        }
        cout << num << endl;
    }

    return 0;
}