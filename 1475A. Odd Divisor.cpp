#include<iostream>
using namespace std;
#define ll long long
#define naim '\n'

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */



void solve()
{
    int t ;
    cin>>t;
    while (t--)
    {
        ll n;
        cin >> n;
        if((n & (n - 1)) == 0)
        cout << "NO" << naim;
        else
        cout << "YES" << naim;
    }



}

int main()
{
    solve();
}

