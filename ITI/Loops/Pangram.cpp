#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string word;
    cin >> word;
    int freq[26]{};
    for (int i = 0; i < n; i++)
    {
        if (islower(word[i]))
            freq[word[i] - 'a']++;
        else
            freq[word[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++)
        if (freq[i] == 0)
        {
            cout << "NO";
            return 0;
        }
    cout << "YES";
    return 0;
}