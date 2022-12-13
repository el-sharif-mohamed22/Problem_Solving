// Problem name: 1257C-Dominated Subarray From the Future
// problem link: https://codeforces.com/problemset/problem/1257/C
#include <iostream>
#include <map>
#include <vector>

using namespace std;
int sol() {
    int n, ans{ INT_MAX }; cin >> n;
    vector<int> arr(n);
    map<int, vector<int>> mp;
    for (int i = 0; i < arr.size(); ++i) {
        cin >> arr[i];
        mp[arr[i]].emplace_back(i);
    }

    for (const auto& i : mp) {
        for (int j = 1; j < i.second.size(); ++j) {
            ans = min(ans, i.second[j] - i.second[j - 1]);
            if (ans == 1) {
                return 2;
            }
        }
    }
    return (ans == INT_MAX ? -1 : ans + 1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        cout << sol() << "\n";
    }
}
