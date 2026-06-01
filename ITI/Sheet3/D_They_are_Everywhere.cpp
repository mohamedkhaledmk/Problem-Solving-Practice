#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, diffCount = 0;
    cin >> n;
    int freq[128]{}, freq2[128]{};
    vector<char> word(n);
    for (int i = 0; i < n; i++)
    {
        cin >> word[i];
        if (freq[word[i]]++ == 0)
        {
            diffCount++;
        }
    }
    int l = 0, r = 0, noFlats = n, currDiff = 0;

    while (r < n)
    {
        if (freq2[word[r]]++ == 0)
            currDiff++;
        r++;
        while (currDiff == diffCount)
        {
            noFlats = min(noFlats, r - l);
            freq2[word[l]]--;
            if (freq2[word[l]] == 0)
                currDiff--;
            l++;
        }
    }
    cout << noFlats;

    return 0;
}