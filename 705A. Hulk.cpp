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
    int n;
    cin >> n;
    for(int i =1; i<n;i++)
    {
        if(i%2!=0)
        {
            cout<<"I hate that ";
        }
        else if(i%2==0)
        {
            cout<<"I love that ";
        }
    }
    if(n%2!=0)
    {
        cout<<"I hate it";
    }
    if(n%2==0)
    {
        cout<<"I love it";
    }

}

