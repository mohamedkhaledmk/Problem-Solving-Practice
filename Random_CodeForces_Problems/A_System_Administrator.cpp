#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int idx,val1,val2;
    int arr[2][2]={};
    for (int i = 0; i < n; i++)
    {
        cin>>idx>>val1>>val2;
        arr[idx-1][0]+=val1;
        arr[idx-1][1]+=val2;
    }
    for (int i = 0; i < 2; i++)
    {
        if(arr[i][0]>=arr[i][1])
        {
            cout<<"LIVE"<<endl;
        }else
            cout<<"DEAD"<<endl;
    }
    

    return 0;
}
