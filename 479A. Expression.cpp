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
    int a, b, c;
    cin >> a >> b >> c;

    int maxi = max({a * (b + c), (a + b) * c, a * b * c, a + b + c});

    cout << maxi << endl;

    return 0;
}

