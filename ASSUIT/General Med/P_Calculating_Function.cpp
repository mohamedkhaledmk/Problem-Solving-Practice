#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <map>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
        cout << (n + 1) / 2;
    else
        cout << -(n + 1) / 2;

    return 0;
}