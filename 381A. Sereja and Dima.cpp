#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sereja = 0, dima = 0;
    int l = 0, r = n - 1;
    bool sereja_turn = true;

    while (l <= r) {
        if (arr[l] > arr[r]) {
            if (sereja_turn) {
                sereja += arr[l];
            } else {
                dima += arr[l];
            }
            l++;
        } else {
            if (sereja_turn) {
                sereja += arr[r];
            } else {
                dima += arr[r];
            }
            r--;
        }
        sereja_turn = !sereja_turn;
    }

    cout << sereja << " " << dima << endl;
    return 0;
}
