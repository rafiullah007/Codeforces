#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */
    

int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;
    string combined = guest + host;
    sort(combined.begin(), combined.end());
    sort(pile.begin(), pile.end());
    if (combined == pile) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
