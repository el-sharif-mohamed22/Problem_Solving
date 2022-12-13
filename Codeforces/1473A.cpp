// problem link: https://codeforces.com/problemset/problem/1473/A
// problem name: 1473A, Replacing Elements 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    short tt; cin >> tt;
    while (tt--) {
        bool satisfy{true};
        short n, d, min1{101}, min2{101}; cin >> n >> d;
        vector<short> arr(n);
        for (short& i : arr) {
            cin >> i;
            if (i > d) satisfy = false;
            if (i < min1) {
                min2 = min1;
                min1 = i;
            } else if (i < min2) {
                min2 = i;
            }
        }
        cout << (min1 + min2 <= d || satisfy ? "YES\n" : "NO\n");
    }
    return 0;
}