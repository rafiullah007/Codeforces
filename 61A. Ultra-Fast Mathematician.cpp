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
    string a,b;
    cin >> a ;
    cin >> b ;
    for (size_t i =0 ; i <a.length(); i++)
    {
        if(a[i]==b[i])
        {
            cout<<"0";
        }
        else {
            cout<<"1";
        }
    }
}
