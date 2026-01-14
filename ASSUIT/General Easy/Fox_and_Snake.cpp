#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    bool f = true;
    for (int i = 0; i < n1; i++)
    {
        char c = '#';
        if (i % 2 != 0)
        {
            c = '.';
            f = !f;
        }
        if (f)
            cout << '#';
        for (int j = 0; j < n2 - 1; j++)
        {
            cout << c;
        }
        if (!f)
            cout << '#';
        cout << endl;
    }
}