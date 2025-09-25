#include <iostream>
using namespace std;
#include <queue>

int main(void){
    queue<int> Q;
    int N, k;
    cin>>N>>k;
    for(int i=1; i<=N; i++){
        Q.push(i);
    }
    int size = Q.size();

    cout<<"<";

    while(!Q.empty()){
        for(int i=0; i<k-1; i++){
            Q.push(Q.front());
            Q.pop();
        }
        cout<<Q.front();
        Q.pop();
        if(!Q.empty()) cout<<", ";

    }
    cout<<">"<<endl;

    return 0;
}
