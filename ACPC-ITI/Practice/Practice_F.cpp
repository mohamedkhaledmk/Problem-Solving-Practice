#include <iostream>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    cout << min(n, min(m, x));
    return 0;
}