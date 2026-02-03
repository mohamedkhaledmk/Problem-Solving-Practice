#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    ll multiply = (ll)x * y;
    if (multiply % z != 0)
    {
        cout << "double";
    }
    else if (multiply / (ll)z > 2147483647)
    {
        cout << "long long";
    }
    else
    {
        cout << "int";
    }
    return 0;
}
