// Problem Name: 1656C - Make Equal With Mod
// Problem Link: https://codeforces.com/problemset/problem/1656/C
// Submission Link: https://codeforces.com/contest/1656/submission/188494293
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
string solution() {
    bool containsOne{ false };
    int n; cin >> n;
    vector<int> array(n);
    for (int& i : array) {
        cin >> i;
        if (i == 1) containsOne = true;
    }
    if (!containsOne) {
        return "YES";
    } else {
        sort(array.begin(), array.end());
        for (int i = 1; i < n; ++i) {
            if (array[i] - array[i - 1] == 1) {
                return "NO";
            }
        }
        return "YES";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        cout << solution() << "\n";
    }
    return 0;
}
