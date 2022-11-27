#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n; cin >> n;
    unordered_map<string, bool> order;
    vector<string> dialogue(n);
    for (int i = 0; i < n; ++i) {
        cin >> dialogue[i];
    }
    for (auto i = dialogue.rbegin(); i != dialogue.rend(); ++i) {
        if (order.find(*i) == order.end()) {
            cout << *i << endl;
            order[*i] = true;
        }
    }


    return 0;
}
