// problem link: https://codeforces.com/problemset/problem/1196/B
// problem name: B. Odd Sum Segments, 1196B
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tt; cin >> tt;
    while (tt--) {
        int n, k, odd{0}, even{0}; cin >> n >> k;
        vector<int> arr(n);
        for (int& i : arr) {
            cin >> i;
            if (i & 1) {
                odd++;
            } else {
                even++;
            }
        }
        if (odd < k || (odd - k) & 1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            for (int i = 0; i < n && (k - 1); ++i) {
                if (arr[i] & 1) {
                    cout << i + 1 << " ";
                    k--;
                }
            }
            cout << n << "\n";
        }
    }
    return 0;
}