#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string str1, str2;
        int count = 0;
        int alphabet1[26] = {0, }, alphabet2[26] = {0, };
        cin >> str1 >> str2;
        for(int j = 0; j < str1.length(); j++){
            alphabet1[str1[j] - 'a']++;
        }
        for(int j = 0; j < str2.length(); j++ ){
            alphabet2[str2[j] - 'a']++;
        }
        for(int j = 0; j < 26; j++){
            if(alphabet1[j] == alphabet2[j]) count++;
        }
        if(count == 26) cout << "Possible" << '\n';
        else cout << "Impossible" << '\n';
    }
    return 0;
}
