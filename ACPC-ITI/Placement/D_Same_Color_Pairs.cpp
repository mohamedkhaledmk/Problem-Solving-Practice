#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int freq[26]{};
    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
    }
    int maxi = 0;
    for (int i = 0; i < 26; i++)
    {
        maxi += freq[i] / 2;
    }
    cout << maxi;

    return 0;
}