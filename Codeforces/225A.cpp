// problem link: https://codeforces.com/problemset/problem/225/A
// problem name: A. Dice Tower, 225A
#include <iostream>
#include <string>
using namespace std;
string solve() {
    int n, x, a, b; cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if (a == x || (7 - a) == x || b == x || (7 - b) == x) {
            return "NO";
        }
    }
    return "YES";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cout << solve();
    return 0;
}