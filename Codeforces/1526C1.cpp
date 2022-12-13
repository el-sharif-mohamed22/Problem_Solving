//// problem link: https://codeforces.com/contest/1526/problem/C1
//// problem name: 1526C1, Potions (Easy Version)
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, count{0}; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    long long health{0};
    priority_queue<int> neg;
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= 0) {
            count++;
            health += arr[i];
        } else if (arr[i] + health < 0){
            if (!neg.empty() && neg.top() > -arr[i]) {
                health += neg.top();
                health += arr[i];
                neg.pop();
                neg.push(-arr[i]);
            }
        } else {
            health += arr[i];
            count++;
            neg.push(-arr[i]);
        }
    }
    cout << count;


}