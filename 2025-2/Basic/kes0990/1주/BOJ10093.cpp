#include <iostream>
using namespace std;

int main(void){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    long int a, b;
    cin>>a>>b;
    if(a==b){
        cout<<0<<"\n";
    }
    else if (a<b){
        cout<<b-a-1<<"\n";
        for(long int i=a+1; i<b; i++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    else{
        cout<<a-b-1<<"\n";
        for(long int i=b+1; i<a; i++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
