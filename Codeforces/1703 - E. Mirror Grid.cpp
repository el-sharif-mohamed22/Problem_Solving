// Created by mohamed al-sharif in 1/6/2023
// program to solve problem: 1703 - E. Mirror Grid
// problem link: https://codeforces.com/problemset/problem/1703/E
// submission link: https://codeforces.com/contest/1703/submission/188210077
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void sol() {
    // grid of size n * n
    int n, count{ 0 }; cin >> n;

    // creating and reading the grid
    vector<string> grid(n, string(n, ' '));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i <= n / 2; ++i) {
        for (int j = i; j < n - i - 1; ++j) {
            // sum the cell and its corresponding rotated cells
            int sum = grid[i][j] + grid[j][n - 1 - i] + grid[n - 1 - i][n - 1 - j] + grid[n - 1 - j][i] - '0' * 4;
            // when sum == 0 or sum == 4 then all the cells are equal and doesn't need to change.
            // otherwise we check it's minimal to make them zeros or make them ones.
            if (sum != 0 && sum != 4) count += min(sum, 4 - sum);
        }
    }
    cout << count << "\n";
}
int main() {
    int t; cin >> t;
    while (t--) sol();
    return 0;
}
