#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;

    for(int i = 1; i < N+1 ; i++ ){
        for(int j=0;j<i-1;j++){
            cout << ' ';
        }
        for(int j=1;j<2*(N-(i-1));j++){
            cout << '*';
        }
        cout << "\n";
    }
    for(int i = N-1; i > 0 ; i-- ){
        for(int j=0;j<i-1;j++){
            cout << ' ';
        }
        for(int j=1;j<2*(N-(i-1));j++){
            cout << '*';
        }
        if(i != 1){
            cout << "\n";    
        }
    }
    return 0;
}