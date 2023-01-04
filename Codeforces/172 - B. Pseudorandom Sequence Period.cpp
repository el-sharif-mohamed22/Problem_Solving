// Problem Name: 172 - B. Pseudorandom Sequence Period
// Problem Link: https://codeforces.com/problemset/problem/172/B
// Submission Link: https://codeforces.com/contest/172/submission/187970295

#include <iostream>
using namespace std;

int freq[100001] {0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int a, b, m, r, count{ 0 }, cycle { 0 };
    cin >> a >> b >> m >> r;
    while (!cycle) {
        count++;
        if (freq[r]) {
            cycle = count - freq[r];
        } else {
            freq[r] = count;
        }
        r = (a * r + b) % m;
    }
    cout << cycle;
}