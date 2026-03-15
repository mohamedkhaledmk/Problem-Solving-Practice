#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    char word[n];
    for (int i = 0; i < n; i++)
    {
        cin >> word[i];
    }
    int freq[2]{}, l = 0, r = 0, res = 0;
    while (r < n)
    {
        if (word[r] == 'a')
            freq[0]++;
        else
            freq[1]++;

        r++;
        while (min(freq[0], freq[1]) > k)
        {
            freq[word[l] - 'a']--;
            l++;
        }
        res = max(res, r - l);
    }
    cout << res;

    return 0;
}