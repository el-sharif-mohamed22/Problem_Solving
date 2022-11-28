#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int w; cin >> w;
    if (w&1 || w < 4) cout << "NO";
    else cout << "YES";
    return 0;
}
