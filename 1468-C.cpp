#include <iostream>
#include <map>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int q, m, inx{1}; cin >> q;
    char op; map<int, int> mono; multimap<int, int, greater<>> poly;
    while(q--) {
        cin >> op;
        if (op == '1') {
            cin >> m;
            mono.insert({inx, m});
            poly.insert({m, inx});
            inx++;
        } else if (op == '2') {
            cout << mono.begin()->first << " ";
            poly.erase(poly.find(mono.begin()->second));
            mono.erase(mono.begin());
        } else {
            cout << poly.begin()->second << " ";
            mono.erase(poly.begin()->second);
            poly.erase(poly.begin());
        }
    }

    return 0;
}
