#include <iostream>
#include <string>
using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */

int main() {
    string p;
    cin >> p;

    bool output = false;
    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9') {
            output = true;
            break;
        }
    }

    if (output)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
