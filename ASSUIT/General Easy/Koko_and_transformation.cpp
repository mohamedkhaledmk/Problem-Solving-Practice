#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b;
    int sumA = 0, sumB = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> x;
        sumA += x;
    }
    for (int i = 0; i < b; i++)
    {
        cin >> x;
        sumB += x;
    }
    cout << (sumA == sumB ? "Yes" : "No");
    return 0;
}