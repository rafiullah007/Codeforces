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
    string a,b;
    cin>>a>>b;
    int i;
    for(i=0;i<a.size();i++)
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    if(a==b){
        cout<<"0"<<endl;
    }
    else {
        for(i=0;i<a.size();i++)
    {
        if(a[i]<b[i])
        {
            cout<<"-1"<<endl;
            break;
        }
        if(a[i]>b[i])
        {
            cout<<"1"<<endl;
            break;
        }

    }
    }

}
