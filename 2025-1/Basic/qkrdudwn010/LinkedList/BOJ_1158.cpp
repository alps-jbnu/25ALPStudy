#include <iostream>
#include <list>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int k, n;
    cin >> n >> k;

    list<int> l;

    for(int i = 1; i <= n; i++){
        l.push_back(i);
    }
    
    auto cursor = l.begin();

    cout << "<";
    while(l.size() > 1){
        for(int i = 0; i < k - 1; i++){
            cursor++;
            if(cursor == l.end()) cursor = l.begin();
        }
        cout << *cursor << ", ";
        cursor = l.erase(cursor);
        if(cursor == l.end()) cursor = l.begin();
    }
    cout << *cursor << ">";     
    return 0;
}
