#include <iostream>
using namespace std;

int main(void){

    int num[3];
    for(int i=0; i<3; i++){
        cin>>num[i];
    }
    for(int i=0; i<2; i++){
        for(int j=i+1; j<3; j++){
            if(num[i]>num[j]){
                int tmp = num[i];
                num[i]=num[j];
                num[j]=tmp;
            }
        }
    }
    
    for(int i=0; i<3; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;

    return 0;
}
