#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,w,h,t,math;
    cin>>n>>w>>h;
    math=sqrt(w*w+h*h);
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t<=math)
        {
            cout<<"DA"<<endl;
        }
        else
        {
            cout<<"NE"<<endl;
        }
    }
}
