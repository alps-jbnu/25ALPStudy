#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin>>N>>K;
    int M[6];
    int W[6];

    for(int i=0; i<6; i++){
        M[i]=W[i]=0;
    }
    int room=0;

    for(int i=0; i<N; i++){
        int s, y;
        cin>>s>>y;
        if(s==0){
            W[y-1]++;
        }
        else{
            M[y-1]++;
        }
    }
    for(int i=0; i<6; i++){
        room += (M[i]+K-1)/K + (W[i]+K-1)/K;
    }
    cout<<room<<"\n";
    return 0;
}
