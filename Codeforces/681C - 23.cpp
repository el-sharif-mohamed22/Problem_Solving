#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, val, count{0}; cin >> n;
    string operation, commands;
    priority_queue<int, vector<int>, greater<>> q;
    for (size_t i = 0; i < n; i++) {
        cin >> operation;
        if (operation == "insert") {
            cin >> val;
            q.push(val);
            commands.append("insert " + to_string(val) + "\n"); count++;
        } else if (operation == "getMin") {
            cin >> val;
            while (!q.empty()) {
                if (q.top() >= val) {
                    break;
                } else {
                    q.pop();
                    commands.append("removeMin\n"); count++;
                }
            }
            if (q.empty() || q.top() != val) {
                commands.append("insert " + to_string(val) + "\n"); count++;
                q.push(val);
            }
            commands.append("getMin " + to_string(val) + "\n"); count++;
        } else {
            if (q.empty()) {
                commands.append("insert 1\n"); count++;
                commands.append("removeMin\n"); count++;
            } else {
                q.pop();
                commands.append("removeMin\n"); count++;
            }
        }
    }
    cout << count << "\n" << commands;
    return 0;
}
