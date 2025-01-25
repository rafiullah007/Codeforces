#include <iostream>
#include <vector>
using namespace std;
 
    /*
 
    MD. RAFIULLAH AL NAIM
    UNIVERSITY : UNIVERSITY OF ASIA PACIFIC
    STUDENT ID : 22101150 (UAP,DHAKA,BANGLADESH)
    COLLEGE : ADAMJEE CANTONMENT COLLEGE
    STUDENT ID : 181063 (ACC,DHAKA,BANGLADESH)
 
    */
    
int main() {
    int n;
    cin >> n;
 
    vector<pair<int, int>> teams(n);
    for (int i = 0; i < n; i++) {
        cin >> teams[i].first >> teams[i].second;
    }
 
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) 
            {
                
                if (teams[i].first == teams[j].second) 
                {
                    count++; 
                }
            }
        }
    }
 
    cout << count << endl;
 
    return 0;
}
