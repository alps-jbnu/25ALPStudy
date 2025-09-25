#include <iostream>
#include<string>
using namespace std;
#include <list>
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin>>N;
    while(N--){
         string ch;
        cin>>ch;

        list<char> L;
        list<char>::iterator cursor = L.begin();

        for(int j=0; j<ch.length(); j++){

            if (ch[j]=='<'){
                if(cursor!=L.begin()&&!L.empty()){
                    cursor--;
                }
            }
            else if (ch[j]=='>'&&!L.empty()){
                if(cursor!=L.end()){
                    cursor++;
                }
            }

            else if (ch[j]=='-'&&cursor!=L.begin()){
                cursor = L.erase(--cursor);
            }

            else{
                L.insert(cursor, ch[j]);
            }
        }

        for(char c : L){
            cout<<c;
        }
        cout<<"\n";
    }

    


    return 0;
}
