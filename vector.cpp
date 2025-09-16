#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v(5,1);
    int n, s=0;
    cin>>n;
    cout<<"enter numbers:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
     for(int i=0;i<n;i++)
    {
        s=s+v[i];
    }
    cout<<s<<endl;
}