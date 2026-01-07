#include <iostream>
#include <map>
using namespace std;

bool fun(string word, int start)
{
    if (start >= 2)
    {
        if (word[start - 1] != word[start - 2])
            return true;
        else if (start > 2 && word[start - 2] == word[start - 3])
            return true;
    }
    return false;
}

int main()
{
    int nums;
    cin >> nums;
    while (nums--)
    {
        int chs;
        string word;
        cin >> chs >> word;
        map<string, int> freq;
        bool flag = false;
        for (int i = 1; i < chs; i++)
        {
            string s;
            s += word[i];
            s += word[i - 1];
            if (freq[s] > 0 && word[i] != word[i - 1])
            {
                flag = true;
                break;
            }
            else if (word[i] == word[i - 1] && fun(word, i) && freq[s] > 0)
            {
                flag = true;
                break;
            }
            else
                freq[s]++;
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}
