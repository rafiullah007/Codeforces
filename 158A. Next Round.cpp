#include <iostream>

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
    int n, k;
    cin >> n >> k;

    int a;
    for (int i = 0; i < k; ++i)
    {
        cin >> a;
        if (a == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    int b;
    for (int i = k; i < n; ++i)
    {
        cin >> b;
        if (b != a)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << n << endl;
    return 0;
}
