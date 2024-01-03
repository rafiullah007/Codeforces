#include<iostream>
#include<bits/stdc++.h>
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
    string s;
    map<string,int>reg;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(reg[s]==0)
        {
            reg[s]=1;
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<s<<reg[s]<<endl;
            reg[s]++;
        }

    }
}

