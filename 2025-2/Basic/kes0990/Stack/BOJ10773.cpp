#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin>>k;
    int n;
    int stack[100000];
    int rear=0;
    while(k>0){
        cin>>n;
        if(n!=0){
            stack[rear++]=n;
        }
        if(n==0){
            rear--;
        }
        k--;
    }
    long long int sum=0;
    for(int i=0; i<rear; i++){
        sum+=stack[i];
    }
    cout<<sum<<"\n";

    return 0;
}
