#include <bits/stdc++.h>
using namespace std;

string func1(string s1, string s2){
    int mlen = s1.length();
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    for(int i=0; i<mlen; i++){
        if(s1[i]!=s2[i]) return "Impossible";
    }
    return "Possible";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    
    for(int i=0; i<n; i++){
        string s1, s2;
        cin >> s1 >> s2;
        
        cout << func1(s1, s2) << "\n";
    }
    
    return 0;
}
