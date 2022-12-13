// Problem name: 259C, Little Elephant and Bits
// problem link: https://codeforces.com/contest/259/problem/C
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s; cin >> s;
    bool flag = false;
    for (string::iterator it = s.begin(); it != s.end(); ++it) {
        if (*it == '0') {
            s.erase(it);
            flag = true;
            break;
        }
    }
    if (flag) cout << s;
    else cout << s.substr(0, s.size() - 1);
}
