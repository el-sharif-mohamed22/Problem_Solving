// problem link: https://atcoder.jp/contests/abc220/tasks/abc220_c
// problem name: C - Long Sequence
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n, x, sum{0}, iteration, k{0};
    cin >> n;
    vector<long long> arr(n);
    for (long long& i : arr) {
        cin >> i;
        sum += i;
    }
    cin >> x;
    iteration = x / sum;
    x = x - iteration * sum;
    while (x >= 0) {
        x -= arr[k];
        k++;
    }
    cout << k + iteration * n;
    return 0;
}