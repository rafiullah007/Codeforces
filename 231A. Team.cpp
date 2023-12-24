#include<iostream>
using namespace std;
int main()
{
    int t,i,a,b,c;
    int count=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if(a+b+c>=2) count++;
    }
     cout<<count;
}
