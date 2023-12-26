#include<iostream>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


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
