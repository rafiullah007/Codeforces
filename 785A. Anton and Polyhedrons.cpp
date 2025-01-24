#include <iostream>
#include <string>
using namespace std;

int main() {
    int Tetrahedron = 4, Cube = 6, Octahedron = 8, Dodecahedron = 12, Icosahedron = 20;
    int t, sum(0); 
    cin >> t;

    string s; 
    while (t--) {
        cin >> s;
        if (s == "Tetrahedron") {
            sum += Tetrahedron;
        } else if (s == "Cube") {
            sum += Cube;
        } else if (s == "Octahedron") {
            sum += Octahedron;
        } else if (s == "Dodecahedron") {
            sum += Dodecahedron;
        } else if (s == "Icosahedron") {
            sum += Icosahedron;
        }
    }

    cout << sum << endl; 
    return 0;
}
