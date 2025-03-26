#include <iostream>
#include <list>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;

    while(n--){
        string str;
        list<char> li;
        list<char>::iterator cur = li.begin();
        cin >> str;
        for(int i = 0; i < str.size(); i++){
            if(str[i] == '<'){
                if(cur != li.begin())
                    cur--;
            }
            else if(str[i] == '>'){
                if(cur != li.end())
                    cur++;
            }
            else if(str[i] == '-'){
                if(cur != li.begin())
                    cur = li.erase(--cur);
            }
            else
                li.insert(cur, str[i]);
        }
        for(char e : li)    cout << e;
        cout << '\n';
    }
    return 0;
}
