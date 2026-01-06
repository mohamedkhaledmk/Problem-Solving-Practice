#include <iostream>
using namespace std;

int main()
{
    int lects, mins;
    cin >> lects >> mins;
    int algos[lects], prefix[lects + 1]{}, prefix2[lects], awake[lects];
    for (int i = 0; i < lects; i++)
        cin >> algos[i];
    for (int i = 0; i < lects; i++)
        cin >> awake[i];
    for (int i = 1; i <= lects; i++)
    {
        prefix[i] = prefix[i - 1] + (awake[i - 1] ? algos[i - 1] : 0);
        prefix2[i] = prefix2[i - 1] + (!awake[i - 1] ? algos[i - 1] : 0);
    }

    int maxi = 0;
    for (int i = mins; i <= lects; i++)
    {
        maxi = max(maxi, prefix2[i] - prefix2[i - mins]);
    }
    cout << maxi + prefix[lects];

    return 0;
}