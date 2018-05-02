#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,a[1000],result,sum=0;
    cin>>x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    result=(x*(n+1))-sum;
    cout<<result<<endl;
    return 0;
}
