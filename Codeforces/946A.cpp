// Problem name: 946A, Partition
// problem link: https://codeforces.com/problemset/problem/946/A
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, neg{0}, pos{0}, temp; cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        if (temp < 0) {
            neg += temp;
        } else {
            pos += temp;
        }
    }
    cout << pos - neg;
}
