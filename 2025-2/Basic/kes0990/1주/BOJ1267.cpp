#include <iostream>
using namespace std;

int main(void){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, n;
    int Y=0, M=0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>n;
        for(int i=n; i>=0;){
            Y+=10;
            i-=30;
        }
        for(int i=n; i>=0;){
            M+=15;
            i-=60;
        }
    }
    if(Y<M){
        cout<<"Y "<<Y<<"\n";
    }
    else if(Y>M){
        cout<<"M "<<M<<"\n";
    }
    else{
        cout<<"Y M "<<Y<<"\n";
    }
    return 0;
}
