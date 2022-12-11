//// problem link: https://codeforces.com/contest/1490/problem/F
//// problem name: 1490F - 18 - Equalize the Array
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        int n, temp; cin >> n;
        map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            cin >> temp;
            freq[temp] += 1;
        }
        vector<int> freqSorted(freq.size());
        int index = 0;
        for (auto i : freq) {
            freqSorted[index] = i.second;
            index++;
        }
        sort(freqSorted.begin(), freqSorted.end());

        int left{0}, right{0};
        for (int i = 1; i < freqSorted.size(); ++i) {
            right += freqSorted[i] - freqSorted[0];
        }
        int min = left + right;
        for (int i = 1; i < freqSorted.size(); ++i) {
            left += freqSorted[i - 1];
            right -= (freqSorted[i] - freqSorted[i - 1]) * (freqSorted.size() - i);
            if (left + right < min) {
                min = left + right;
            }
        }
        cout << min << "\n";
    }
}