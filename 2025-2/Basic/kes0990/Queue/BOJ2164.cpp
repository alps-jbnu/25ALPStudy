#include <iostream>
#include <queue>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin>>N;
    queue<int> Q;
    for(int i=1; i<=N; i++){
        Q.push(i);
    }
    while(Q.size()>1){
        Q.pop();
        int top = Q.front();
        Q.pop();
        Q.push(top);
    }
    cout<<Q.front()<<"\n";
    return 0;
}
