#include<iostream>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

    int EscapedUnharmed(int k, int l, int m, int n, int d )
    {
        int count = 0;
        for(int i = 1 ; i <= d ; i++)
        {
            if(i % k==0 || i % l==0 || i % m==0 ||i % n==0)
            {
                count++;
            }
        }
        return count;
    }

    int main()
    {
        int k,l,m,n,d;
        cin>>k>>l>>m>>n>>d;
        int count = 0 ;
        cout<<EscapedUnharmed(k,l,m,n,d)<<endl;
    }
