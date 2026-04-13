#include <bits/stdc++.h>

using namespace std;

bool cmp(string s1, string s2)
{
    int dashIdx = s1.find('-');
    int dashIdx2 = s2.find('-');
    string ss1 = s1.substr(dashIdx);
    string ss2 = s2.substr(dashIdx2);
    if (ss1 < ss2)
    {
        return true;
    }
    else if (ss1 > ss2)
    {
        return false;
    }
    else
    {

        stringstream sstream(s1);
        stringstream sstream2(s2);
        int num1;
        sstream >> num1;
        int num2;
        sstream2 >> num2;
        return num1 < num2;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<string> movies(n);
    for (int i = 0; i < n; i++)
    {
        cin >> movies[i];
    }
    sort(movies.begin(), movies.end(), cmp);
    for (int i = 0; i < n - 1; i++)
        cout << movies[i] << endl;
    cout << movies[n - 1];
    return 0;
}