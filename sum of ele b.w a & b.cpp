#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,a,b,s=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    cin>>a>>b;
    for(i=0;i<n;i++)
    {
        if(a<=arr[i] && arr[i]<=b)
        {
            s+=arr[i];
        }
    }
    cout<<s;
}
