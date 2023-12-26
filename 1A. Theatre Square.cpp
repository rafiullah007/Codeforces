#include <iostream>
#include <cmath>
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
    long double a, n, m, temp;

    cout.precision(22);
    cin >> n >> m >> a;
    if(m < n)
    {
        temp = m;
        m = n;
        n = temp;
    }

    if(a >= m)
    {
        cout << ceil(n/a) << endl;
    }
    else
    {
        cout << ceil(m/a)*ceil(n/a) << endl;
    }
    return 0;
}
