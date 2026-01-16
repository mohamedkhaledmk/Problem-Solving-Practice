#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    auto result = minmax({a, b, c});

    cout << result.second - result.first << endl;

    return 0;
}
