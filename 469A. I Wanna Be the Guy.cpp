#include<bits/stdc++.h>

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */


using namespace std;
int main()
{
    int n, p, q, a[200]; int count(0);
    cin>>n;
    cin>>p;
    for(int i = 0 ; i<p ; i ++)
    {
        cin>>a[i];
    }
    cin>>q;
    for(int i = p ; i<p+q ; i ++)
    {
        cin>>a[i];
    }

    sort(a,a+(p+q));
    for(int i = 0 ; i<p+q ; i ++)
    {
        if(a[i]!= a[i+1])
        {
          count++;
        }
    }
    if(count==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
}
