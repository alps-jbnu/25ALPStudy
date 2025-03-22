#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    cin >> T;

    while (T--) {
        list<char> l;
        auto cursor = l.end();

        string str;
        cin >> str;

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '<') {
                if (cursor != l.begin()) cursor--; 
            } 
            else if (str[i] == '>') {
                if (cursor != l.end()) cursor++; 
            } 
            else if (str[i] == '-') {
                if (cursor != l.begin()) { 
                    cursor--;
                    cursor = l.erase(cursor);  
                }
            } 
            else {
                l.insert(cursor, str[i]); 
            }
        }

        for (auto i = l.begin(); i != l.end(); i++) {
            cout << *i;
        }
        cout << '\n';
    }

    return 0;
}
