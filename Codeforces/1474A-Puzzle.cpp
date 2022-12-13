// Problem name: 1474A-Puzzle From the Future
// problem link: https://codeforces.com/problemset/problem/1474/A
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        string b, a(n, '0'); cin >> b;

        for (int i = 0; i < b.size(); ++i) {
            if (i == 0 || a[i - 1] + b[i - 1] - 2 * '0' != b[i] + '1' - 2 * '0') {
                a[i] = '1';
            }
        }
        cout << a << "\n";
    }
}
