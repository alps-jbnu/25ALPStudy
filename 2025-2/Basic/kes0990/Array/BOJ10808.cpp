#include <iostream>
#include <string>
using namespace std;

int main(void){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string str;
    int arr[26];
    for(int i=0; i<26; i++){
        arr[i]=0;
    }
    cin>>str;
    for(int i=0; i<str.length();i++){
        arr[str[i]-97]++;
    }
    for(int i=0; i<26; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
