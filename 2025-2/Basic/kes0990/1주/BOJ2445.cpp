#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin>>N;
    for(int i=0; i<N-1; i++){
        //1~N-1개까지 * 1개씩 증가시키며 출력
        for(int j=0; j<=0+i; j++){
            cout<<"*";
        }
        //N*2-2개부터 2개씩 감소시켜가며 공백출력
        for(int k=0; k<N*2-2-i*2;k++){
            cout<<" ";
        }
        //* 1~N-1개까지 * 1개씩 증가시키며 출력
        for(int t=0; t<=0+i; t++){
            cout<<"*";
        }
        cout<<"\n";
    }
    //* N*2개 출력
    for(int i=0; i<N*2;i++){
        cout<<"*";
    }
    cout<<"\n";
    
    for(int i=0; i<N-1; i++){
        //* N-1개부터 1개씩 줄여가며 출력
        for(int j=N-1; j>0+i; j--){
            cout<<"*";
        }
        // 공백 1~N*2-2까지 2개씩 늘리며 출력
        for(int k=0; k<2+i*2;k++){
            cout<<" ";
        }
        //* N-1개부터 1개씩 줄여가며 출력
        for(int t=N-1; t>0+i; t--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
