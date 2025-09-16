#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a[5],pos;
   cout<<"enter alements in array"<<endl;
   for(int i=0;i<5;i++)
   {
      cin>>a[i];
   }
   cout<<"enter position: "<<endl;
   cin>>pos;
   for(int i=pos;i<5;i++)
   {
      a[i]=a[i+1];
   }
   cout<<"final array: "<<endl;
   for(int i=0;i<4;i++)
   {
      cout<<a[i]<<" ";
   }
}