#include <iostream>
#include <string>
using namespace std;

bool isStrfry(string str1, string str2){
    if(str1.length()!=str2.length()) return false;
    int arr[26];
    for(int i=0; i<26; i++) arr[i]=0;
    for(int i=0; i<str1.length(); i++){arr[str1[i]-'a']++; arr[str2[i]-'a']--;}
    for(int i=0; i<26; i++){
        if(arr[i]!=0) return false;
    }

    return true;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);



    int N;
    cin>>N;

    for(int i=0; i<N; i++){
        string a, b;
        cin>>a>>b;
        if(isStrfry(a, b)){
            cout<<"Possible"<<"\n";
        }
        else{
            cout<<"Impossible"<<"\n";
        }
    }

    return 0;
}
