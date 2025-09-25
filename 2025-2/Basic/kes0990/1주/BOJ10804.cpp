#include <iostream>
using namespace std;

int main(void){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int card[21];
    for(int i=1; i<=20; i++){
        card[i]=i;
    }
    int a, b;
    for(int i=0; i<10; i++){
        cin>>a>>b;
        for(int j=0; j<(b-a)/2+1; j++){
            int tmp=card[j+a];
            card[j+a]=card[b-j];
            card[b-j]=tmp;
        }
    }
    for(int i=1; i<=20; i++){
        cout<<card[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
