// Problem name: 285C, Building Permutation
// problem link: https://codeforces.com/problemset/problem/285/C
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n; long long moves{0};
    cin >> n;
    vector<int> arr(n);
    for (int& i : arr) {
        cin >> i;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; ++i) {
        moves += abs(arr[i] - (i + 1));
    }
    cout << moves;
}
