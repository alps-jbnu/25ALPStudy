#include <iostream>
#include <list>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    list<int> L;
    int n, k;
    cin >> n >> k;
    for(int i = n; i > 0; i--) L.push_front(i);
    auto cur = L.begin();
    cout << '<';
    while(!L.empty()){
        for(int i = 0; i < k-1; i++){
            cur++;
            if(cur == L.end())  cur = L.begin();
        }
        cout << *cur;
        cur = L.erase(cur);
        if(cur == L.end()) cur = L.begin();
        if(!L.empty())   cout << ", ";
    }
    cout << '>';
    return 0;
}
