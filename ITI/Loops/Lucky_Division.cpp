#include <iostream>

using namespace std;

int main()
{

    int num;
    cin >> num;

    if (num % 4 == 0 || num % 7 == 0 || num % 74 == 0 || num % 47 == 0)
    {
        cout << "YES";
        return 0;
    }
    while (num != 0)
    {
        if (num % 10 != 4 && num % 10 != 7)
        {
            cout << "NO";
            return 0;
        }
        num /= 10;
    }
    cout << "YES";

    return 0;
}