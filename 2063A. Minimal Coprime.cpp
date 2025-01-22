#include <iostream>
#include <vector>
#include <numeric>
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
    int t;
    cin>>t;
    while(t--)
    {
      int a,b;
      cin>>a>>b;
      
      if(a==1 && b==1)
      {
        cout<<1<<endl;
        continue;
      }
      cout<<b-a<<endl;
    }
    return 0;
}
