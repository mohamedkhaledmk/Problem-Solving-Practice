#include <iostream>

using namespace std;

int main()
{
    string word;
    cin >> word;
    int freq[26]{};
    int cnt = 0;
    for (int i = 2; i < word.size(); i += 3)
    {
        if (islower(word[i]) && freq[word[i] - 'a'] == 0)
        {
            freq[word[i] - 'a']++;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}