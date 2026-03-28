#include <bits\stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >>n;
    vector<pair<int,int>> v(n,make_pair(0,0));
    int sum=0;
    for(auto& val : v)
    {
         cin >> val.first;
        if(val.first%2!=0)
        {
            if(val.first>0)
                val.second=1;
            else 
                val.second=-1;
        }
        val.first/=2; 
        sum+=val.first;    
    }
    // cout<<sum<<" ss "<<endl;
    for (int i = 0; i < n&&sum!=0; i++)
    {
        if(sum>0)
        {
            if(v[i].second<0)
            {
                sum--;
                v[i].first--;
            }
        }else
        {
            if(v[i].second>0)
            {
                sum++;
                v[i].first++;
            }
        }
    }
    for(auto& val:v)
        cout<<val.first<<endl;
    
    return 0;
}