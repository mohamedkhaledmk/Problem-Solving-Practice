#include <iostream>
using namespace std;

int main()
{
    string pass;
    cin >> pass;
    int passSZ = pass.size();
    int digits = 0;
    while (passSZ)
    {
        passSZ++;
        passSZ /= 10;
        digits++;
    }
    cout << pass << pass.size() + digits;
    return 0;
}