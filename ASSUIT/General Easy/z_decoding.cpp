#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
    cin >> n;
    char word[n], newWord[n];
    cin >> word;
    int r = n - 1, l = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            newWord[r--] = word[n - 1 - i];
        }
        else
        {
            newWord[l++] = word[n - 1 - i];
        }
    }
    for (int i = 0; i < n; i++)
        cout << newWord[i];

    return 0;
}