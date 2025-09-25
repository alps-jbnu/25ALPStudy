#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n;
    cin >> n;
    cin.ignore();

    list<char> li(s.begin(), s.end());
    auto it = li.end();

    for (int i = 0; i < n; i++) {
        string cmd;
        getline(cin, cmd);

        if (cmd[0] == 'L' && it != li.begin()) {
            it--;
        }
        else if (cmd[0] == 'D' && it != li.end()) {
            it++;
        }
        else if (cmd[0] == 'B' && it != li.begin()) {
            it--;
            it = li.erase(it);
        }
        else if (cmd[0] == 'P'){
            li.insert(it, cmd[2]);
        }
    }

    string answer(li.begin(), li.end());
    cout << answer;
}