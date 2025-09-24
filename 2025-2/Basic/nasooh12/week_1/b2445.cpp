//백준 2445번 별찍기 - 8
#include <iostream>
using namespace std;

int main(void){
    int n; 
    cin >> n;

    for(int i=1;i<n+1;i++){
        for(int j = 1; j<i+1 ;j++  ){
            cout<< '*';
        }
        for(int j = 1; j< (n-i)*2+1 ;j++){
            cout<< ' ';
        }
        for(int j = 1; j<i+1 ;j++  ){
            cout<< '*';
        }
        cout<< "\n";
    }

    for(int i=n-1;i > 0 ;i--){
        for(int j = 1; j<i+1 ;j++  ){
            cout<< '*';
        }
        for(int j = 1; j< (n-i)*2+1 ;j++){
            cout<< ' ';
        }
        for(int j = 1; j<i+1 ;j++  ){
            cout<< '*';
        }
        cout<< "\n";
    }

    return 0;
}