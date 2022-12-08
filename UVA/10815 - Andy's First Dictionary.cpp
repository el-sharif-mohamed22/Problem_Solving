//// problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=1756
//// problem name: 10815 - Andy's First Dictionary
#include <iostream>
#include <set>
#include <string>
#include <sstream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // handling input
    string token;
    set<string> unique;
    while (cin >> token) {
        string word;
        for (char& c : token) {
            if (isalpha(c)) {
                word.push_back(tolower(c));
            }
            else if (!word.empty()) {
                unique.insert(word);
                word.clear();
            }
        }
        if (!word.empty()) {
            unique.insert(word);
        }
    }
    for (auto& i : unique) {
        cout << i << "\n";
    }
}