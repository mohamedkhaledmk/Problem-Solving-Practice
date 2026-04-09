#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    vector<ll> tests(t);
    ll maxi = 0;
    for (ll i = 0; i < t; i++)
    {
        cin >> tests[i];
        tests[i] = tests[i] % (10000007);
        maxi = max(maxi, tests[i]);
    }
    vector<int> facts(maxi + 1, 0);
    vector<int> sumFacts(maxi + 1, 0);
    facts[0] = 1;
    sumFacts[0] = 1;
    for (ll i = 1; i <= maxi; i++)
    {
        facts[i] = i * facts[i - 1];
        sumFacts[i] = sumFacts[i - 1] + facts[i];
    }
    for (ll i = 0; i < t; i++)
    {
        cout << sumFacts[tests[i]] << endl;
    }

    return 0;
}