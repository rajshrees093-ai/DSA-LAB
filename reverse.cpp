#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the no of elements  ";
    cin>>n;
    int a[n];
    cout<<"enter the elements  ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int b= n/2;
    for (int i = 0; i < b; i++)
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    

}