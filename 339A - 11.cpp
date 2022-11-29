// problem link: https://codeforces.com/problemset/problem/339/A
// problem name: A. Helpful Maths, 339A - 11
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s; cin >> s;
    vector<int> numbers;
    for (const char& c : s) {
        if (c != '+') {
            numbers.push_back(c - '0');
        }
    }
    sort(numbers.begin(), numbers.end());
    cout << numbers.front();
    for (int i = 1; i < numbers.size(); ++i) {
        cout << '+' << numbers[i];
    }
    return 0;
}