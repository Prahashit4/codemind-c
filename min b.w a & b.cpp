#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,a,b,s,f=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    cin>>a>>b;
    s=b;
    for(i=0;i<n;i++)
    {
        if(a<=arr[i] || arr[i]>=b)
        {
            if(s>arr[i])
            {
                s=arr[i];
                f++;
            }
        }
    }
    if(f!=0)
    cout<<s;
    else
    cout<<-1;
}
