// Problem name: 1550B-Maximum Cost Deletion
// problem link: https://codeforces.com/problemset/problem/1550/B
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        int n, a, b, count{ 1 }, removes;
        cin >> n >> a >> b;
        string s; cin >> s;

        if (b >= 0) {
            cout << n * (a + b) << "\n";
        } else {
            for (int i = 0; i < s.size() - 1; ++i) {
                if (s[i] != s[i + 1]) {
                    count++;
                }
            }
            removes = count - count / 2  + (count % 2 == 0);
            cout << a * n + b * removes << "\n";
        }
    }
}
