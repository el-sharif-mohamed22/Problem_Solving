// problem link: https://codeforces.com/problemset/problem/1490/A
// problem name: A. Dense Array, 1490A - Dense Array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int dis(const int& a, const int& b) {
    double minimum = min(a, b), maximum = max(a, b); int k{0};
    if (maximum / minimum <= 2) return k;
    while (minimum < maximum / 2.0) {
        minimum *= 2;
        k++;
    }
    return k;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    short tt; cin >> tt;
    while (tt--) {
        int n, k{0}; cin >> n;
        vector<int> arr(n);
        for (int& i : arr) {
            cin >> i;
        }
        for (int i = 1; i < n; ++i) {
            k += dis(arr[i], arr[i - 1]);
        }
        cout << k << "\n";
    }
    return 0;
}