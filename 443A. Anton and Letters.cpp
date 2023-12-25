#include <iostream>
#include <set>
using namespace std;


    /*

    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)

    */



    /*

     DL = DistinctLatter

    */



int main() {
    string s;
    getline(cin, s);

    set<char> DL;

    for (char c : s) {
        if (isalpha(c)) {
            DL.insert(c);
        }
    }

    cout << DL.size() <<endl;

    return 0;
}


