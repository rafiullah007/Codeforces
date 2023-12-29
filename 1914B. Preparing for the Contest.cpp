#include <bits/stdc++.h>
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
    int  t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector < int > v;
        for(int i = 0 ; i < k ; i++)
         {
            v.push_back(n-i);
         }
        for(int i = 0 ; i < (n-k) ; i++)
         {
            v.push_back(i+1);
         }
        for(int i = n-1 ; i >= 0 ; i--)
         {
            cout<<v[i]<<" ";
         }
        cout<<endl;
    }
    return 0;
 }
