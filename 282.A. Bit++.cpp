#include<iostream>
using namespace std ;
int main()
{
    int x=0;
    int t ;
    cin>>t ;
    string s;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        if(s[1]=='+') x++;
        else x--;
    }
    cout<<x ;

}


