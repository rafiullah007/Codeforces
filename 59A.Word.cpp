#include<iostream>
#include<string>
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
    cin>>s;
    int i,up=0,low=0;
    for(i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            up++;
        }
        else
        {
            low++;
        }
    }
    if(up<low)
    {
        for(i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
    else if(up>low)
    {
        for(i=0;i<s.size();i++)
        {
            s[i]=toupper(s[i]);
        }
        cout<<s<<endl;
    }
    else if(up==low)
    {
        for(i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
}
