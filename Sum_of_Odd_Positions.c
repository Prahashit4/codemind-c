#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    int a=0;
    int b=0;
    for(i=0;i<n;i++)
    {
    cin>>arr[i];
    if(i%2!=0)
    {
        a=a+arr[i];
    }
   /* if(i%2==0)
    {
        b=b+arr[i];
    }*/
    }
    cout<<a<<endl;
    //cout<<b<<endl;
}