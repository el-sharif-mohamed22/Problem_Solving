// Problem name: 34B, Sale
// problem link: https://codeforces.com/contest/34/problem/B
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    short n, m; cin >> n >> m;
    vector<int> arr(n);
    for (int& i : arr) {
        cin >> i;
    }
    sort(arr.begin(), arr.end());
    long long sum{0};
    for (int i = 0; i < m; ++i) {
        if (arr[i] < 0) {
            sum -= arr[i];
        } else {
            break;
        }
    }
    cout << sum << "\n";
}
