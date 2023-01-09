// Created by mohamed al-sharif in 1/9/2023
// program to solve problem: 1510 - K. King's Task
// problem link: https://codeforces.com/problemset/problem/1510/K
// submission link: https://codeforces.com/contest/1510/submission/188583627
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void op1(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}
void op2(vector<int>& arr) {
    for (int i = 0; i < arr.size() / 2; ++i) {
        swap(arr[i], arr[i + arr.size() / 2]);
    }
}
bool sorted(vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, mn1{ 0 }, mn2{ 0 }; cin >> n;
    vector<int> arr(2 * n), copy;
    for (int& i : arr) {
        cin >> i;
    }
    copy = arr;

    if (!sorted(arr)) {
        for (int i = 0; i < arr.size() && !sorted(arr); ++i) {
            if (i&1) op2(arr);
            else op1(arr);
            mn1++;
        }
        for (int i = 0; i < arr.size() && !sorted(copy); ++i) {
            if (i&1) op1(copy);
            else op2(copy);
            mn2++;
        }
        min(mn1, mn2) == 2 * n ?  cout << -1 :  cout << min(mn1, mn2);
    } else {
        cout << '0';
    }
    return 0;
}
