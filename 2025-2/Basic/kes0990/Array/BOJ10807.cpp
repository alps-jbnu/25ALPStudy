#include <iostream>
using namespace std;

#define SIZE 100

int main(void){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin>>N;
    int arr[SIZE];

    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    int v, cnt=0;
    cin>>v;
    for(int i=0; i<N; i++){
        if(arr[i]==v){
            cnt++;
        }
    }
    cout<<cnt<<"\n";

    return 0;
}
