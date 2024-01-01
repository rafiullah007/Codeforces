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
    int n, x, E(0), O(0), count(0);
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            count += 1;
            E = i;
        }
        else
        {
            count -= 1;
            O = i;
        }
    }
     if(count>0)
     {
         cout<<O<<endl;
     }
     else
     {
         cout<<E<<endl;
     }

}
