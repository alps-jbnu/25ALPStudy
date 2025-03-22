#include <iostream>
#include <list>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;
    list<char> editor(str.begin(), str.end());
    int m;
    auto cursor = editor.end();
    char op;
    cin >> m;
    while(m--){
        cin >> op;
        int n = str.length();
        if(op == 'L'){
            if(cursor != editor.begin()) cursor--;
        }

        else if(op == 'D'){
            if(cursor != editor.end()) cursor++;
        }

        else if(op == 'B'){
            if(cursor != editor.begin()) {
                cursor--;
                cursor = editor.erase(cursor);
            }
        }

        else if(op == 'P'){
            char c;
            cin >> c;
            editor.insert(cursor, c);
        }
    }
    
    for(auto i = editor.begin(); i != editor.end(); i++){
        cout << *i;
    }
    return 0;
}
