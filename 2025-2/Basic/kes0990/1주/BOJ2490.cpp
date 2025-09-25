#include <iostream>
using namespace std;

int main(void){
    for(int i=0; i<3; i++){
        int front=0, back=0;
        for(int j=0; j<4; j++){
            int n;
            cin>>n;
            if (n==0){
                front++;
            }
            else{
                back++;
            }
        }
        if(front==1 && back==3){
            cout<<"A"<<"\n";
        }
        else if (front==2 && back==2){
            cout<<"B"<<"\n";
        }
        else if(front==3 && back==1){
            cout<<"C"<<"\n";
        }
        else if (front==4){
            cout<<"D"<<"\n";
        }
        else if (back==4){
            cout<<"E"<<"\n";
        }
    }

    return 0;
}
