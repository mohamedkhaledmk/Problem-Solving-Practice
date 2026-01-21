#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    getline(cin, word);
    int freq[26]{};
    int cnt = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if (isalpha(word[i]) && freq[word[i] - 'a'] == 0)
        {
            freq[word[i] - 'a']++;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}