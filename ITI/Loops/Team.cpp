#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0, n1, n2, n3;
    for (int i = 0; i < n; i++)
    {
        cin >> n1 >> n2 >> n3;
        if (n1 + n2 + n3 > 1)
            sum++;
    }
    cout << sum;

    return 0;
}