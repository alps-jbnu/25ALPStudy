#include <iostream>
#include <queue>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    queue<int> Q;
    int N;
    cin>>N;
    for(int i=0; i<N; i++){

        string op;
        cin>>op;
        if(op=="push"){
            int x;
            cin>>x;
            Q.push(x);
        }
        else if(op=="pop"){
            if(Q.empty()){
                cout<<-1<<"\n";
            }
            else{
                cout<<Q.front()<<"\n";
                Q.pop();
            }
        }
        else if(op=="size"){
            cout<<Q.size()<<"\n";
        }
        else if (op=="front"){
            if(Q.empty()){
                cout<<-1<<"\n";
            }
            else{
                cout<<Q.front()<<"\n";
            }
        }
        else if(op=="empty"){
            if(Q.empty()){
                cout<<1<<"\n";
            }
            else cout<<0<<"\n";
        }
        else if(op=="back"){
            if(Q.empty()){
                cout<<-1<<"\n";
            }
            else{
                cout<<Q.back()<<"\n";
            }
        }

    }

    return 0;
}
