// problem link: https://atcoder.jp/contests/abc198/tasks/abc198_b
// problem name: B - Palindrome with leading zeros
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string isPalindrome(const string& s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return "No";
        }
    }
    return "Yes";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s; cin >> s;
    int end;
    for (end = s.size() - 1; end >= 0; --end) {
        if (s[end] != '0') {
            break;
        }
    }
    cout << isPalindrome(s.substr(0, end + 1));

    return 0;
}