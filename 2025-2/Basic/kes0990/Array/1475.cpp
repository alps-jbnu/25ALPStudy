#include <iostream>
using namespace std;

int main(void){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string N;
    int set=0;
    int arr[10];
    for(int i=0; i<10; i++){
        arr[i]=0;
    }
    cin>>N;
    int len = N.length();
    for(int i=0; i<len; i++){
        int n = N[i]-48;
        arr[n]++;
    }

    for(int i=0; i<10; i++){
        if(i!=6&&i!=9){
            if(arr[i]>set){
                set=arr[i];
            }
        }
    }
    int sixn = (arr[6]+arr[9]+1)/2;
    if(set<sixn){
        set=sixn;
    }
    cout<<set<<"\n";
    return 0;
}
