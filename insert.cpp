#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"enter size of array: "<<endl;
  cin>>n;
  int a[n],pos,key;
  cout<<"enter elements: "<<endl;
for(int i=0;i<n;i++)
{
  cin>>a[i];
}
cout<<"enter key: "<<endl;
cin>>key;
cout<<"enter position: "<<endl;
cin>>pos;
for(int i=n;i>pos;i--)
{
  a[i]=a[i-1];
}
a[pos]=key;
cout<<"final array: "<<endl;
for(int i=0;i<n+1;i++)
{
  cout<<a[i]<<" ";
}
}