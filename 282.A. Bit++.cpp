#include<iostream>
using namespace std ;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


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


