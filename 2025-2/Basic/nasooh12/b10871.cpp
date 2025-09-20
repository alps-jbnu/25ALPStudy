#include <iostream>
using namespace std;

int main(void){
    int N,X,num;
    cin >> N >> X;
    int arr[N] ;
    //숫자를 입력 받고 배열에 저장
    for(int i=0;i<N;i++){
        cin >> num ;
        arr[i] = num;
    }
    //X보다 작은 수 출력
    for(int i=0;i<N;i++){
        if(arr[i]<X){
            cout << arr[i] << ' ';
        }
    }
    return 0;
}