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
    int n = 3;
    int sum1(0);
    int sum2(0);
    int a[n];
    for(int i = 0 ; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a, a + n);
    sum1 =  a[1] - a[0];
    sum2 =  a[2] - a[1];


    cout<<sum1+sum2<<endl;
}

