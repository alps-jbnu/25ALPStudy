#include <iostream>
using namespace std;

int main(void){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int dwarf[9];
    int sum=0;
    for(int i=0; i<9; i++){
        cin>>dwarf[i];
        sum+=dwarf[i];
    }

    for(int i=0; i<8; i++){
        for(int j=i+1; j<9; j++){
            if (dwarf[i]>dwarf[j]){
                int temp= dwarf[i];
                dwarf[i]=dwarf[j];
                dwarf[j]=temp;
            }
        }
    }

    int ndw1, ndw2;
    for(int i=0; i<9; i++){
        for(int j=i+1; j<9; j++){
            if (sum - dwarf[i] - dwarf[j]== 100){
                ndw1=i; ndw2=j;
            }
        }
    }

    for(int i=0; i<9; i++){
        if(i==ndw1||i==ndw2){
            continue;
        }
        else{
            cout<<dwarf[i]<<"\n";
        }
    }

    return 0;
}
