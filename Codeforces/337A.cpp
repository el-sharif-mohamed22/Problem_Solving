// Problem name: 337A, Puzzles
// problem link: https://codeforces.com/problemset/problem/337/A
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m, diff{ INT_MAX }; cin >> n >> m;
    vector<int> arr(m);
    for (int& i : arr) {
        cin >> i;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i <= m - n; ++i) {
        diff = min(diff, arr[i + n - 1] - arr[i]);
    }
    cout << diff;
}
