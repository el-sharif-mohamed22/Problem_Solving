// Problem Name: 112 - B. Petya and Square
// Problem Link https://codeforces.com/contest/112/problem/B
// Submission Link: https://codeforces.com/contest/112/submission/187971080
#include <iostream>
#include <utility>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    pair<int, int> dot, l0, l1, l2, l3;
    cin >> n >> dot.first >> dot.second;
    l0.first = n/2; l0.second = n/2;
    l1.first = n/2; l1.second = n/2 + 1;
    l2.first = n/2 + 1; l2.second = n/2;
    l3.first = n/2 + 1; l3.second = n/2 + 1;
    if (dot == l0 || dot == l1 || dot == l2 || dot == l3) {
        cout << "NO";
    } else {
        cout << "YES";
    }

}