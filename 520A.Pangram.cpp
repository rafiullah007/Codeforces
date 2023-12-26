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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count =0;
    for(int i = 0 ; i<n;i++)
    {
        s[i]= tolower(s[i]);

    }
    sort(s.begin(),s.end());
    for(int i = 0 ; i<n;i++)
    {
        if(s[i]!=s[i+1]) count++;

    }
    if(count == 26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
