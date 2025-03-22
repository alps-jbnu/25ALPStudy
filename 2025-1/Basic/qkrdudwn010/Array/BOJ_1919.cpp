#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string str1, str2;
    int alphabet1[26] = {0, }, alphabet2[26] = {0, };
    int count = 0;
    cin >> str1; 
    cin >> str2;
    for(int i = 0; i < str1.length(); i++){
        alphabet1[str1[i] - 'a']++;
    }
    for(int i = 0; i < str2.length(); i++){
        alphabet2[str2[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(alphabet1[i] > alphabet2[i]) {
            count += alphabet1[i] - alphabet2[i];
        }
        else if(alphabet2[i] > alphabet1[i]){
            count += alphabet2[i] - alphabet1[i];
        }
    }
    cout << count;
    return 0;
}
