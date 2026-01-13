#include <iostream>
#include <map>
#include <math.h>

using namespace std;
#define ll long long

int main()
{
    int n1;
    cin >> n1;
    ll vect[n1 + 1]{};
    ll sum = 0, a;
    ll minP = 0;
    ll maxP = LLONG_MIN;
    for (int i = 1; i <= n1; i++)
    {
        cin >> vect[i];
        vect[i] += vect[i - 1];
        maxP = max(maxP, vect[i] - minP);
        minP = min(minP, vect[i]);
    }
    cout << maxP;
    return 0;
}