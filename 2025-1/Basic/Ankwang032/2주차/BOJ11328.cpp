#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int count1[26]={0}, count2[26]={0};
        string StrIn, StrCom;
        cin >> StrIn >> StrCom;

        if (StrCom.size() != StrIn.size()){
            cout << "Impossible" << endl;
            continue;
        }

        for (char c : StrIn)
        count1[c-'a'] += 1;
        for (char c : StrCom)
        count2[c-'a'] += 1;

        bool PossOrImposs=true;
        for (int j=0; j<26; j++){
        if (count1[j] != count2[j]) {PossOrImposs = false;
            break;
            }
        }
    
        if (PossOrImposs) cout << "Possible" << endl;
        else cout << "Impossible" << endl;
    }

    return 0;
}