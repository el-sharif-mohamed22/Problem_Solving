// problem link: https://codeforces.com/problemset/problem/1360/B
// problem name: 1360B, Honest Coach
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    short tt; cin >> tt;
    while (tt--) {
        int n, diff{1001};
        cin >> n; vector<short> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] - arr[i - 1] < diff) {
                diff = arr[i] - arr[i - 1];
            }
        }
        cout << diff << "\n";
    }
    return 0;
}