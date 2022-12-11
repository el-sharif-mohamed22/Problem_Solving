//// problem link: https://codeforces.com/contest/1526/problem/C2
//// problem name: 1526C2 - 14, Potions (Hard Version)
#include <iostream>
#include <set>
#include <algorithm>
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
    multiset<int> st;
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= 0) {
            count++;
            health += arr[i];
        } else if (arr[i] + health < 0){
            if (!st.empty() && *st.begin() < arr[i]) {
                health -= (*st.begin());
                health += arr[i];
                st.erase(st.begin());
                st.insert(arr[i]);
            }
        } else {
            health += arr[i];
            count++;
            st.insert(arr[i]);
        }
    }
    cout << count;


}