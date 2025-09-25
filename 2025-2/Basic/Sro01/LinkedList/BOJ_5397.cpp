#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    
    for (int i = 0; i < n; i++) {
        string cmds;
        getline(cin, cmds);

        list<char> li;
        auto it = li.end();

        for (char cmd : cmds) {
            if (cmd == '<') {
                if (it != li.begin())
                    it--;
            }
            else if (cmd == '>') {
                if (it != li.end())
                    it++;
            }
            else if (cmd == '-') {
                if (it != li.begin()) {
                    it--;
                    it = li.erase(it);
                }

            }
            else {
                li.insert(it, cmd);
            }
        }

        for (char c : li) {
            cout << c;
        }
        cout << "\n";
    }

}