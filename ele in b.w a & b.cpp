#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,a,b,f=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    cin>>a>>b;
    for(i=0;i<n;i++)
    {
        if(a<=arr[i] && arr[i]<=b)
        {
            f++;
        }
    }
    if(f!=0)
    {
        for(i=0;i<n;i++)
        {
            if(a<=arr[i] && arr[i]<=b){
            cout<<arr[i]<<" ";
        }
        }
    }
    else
    cout<<-1;
}
/* 0 1 2 3 4 5 6 7
2 & 5
ans=2 3 4 5*/
