#include <bits/stdc++.h>
using namespace std;

long a,b,t;
vector<long> v, w;
vector<long> ans;
int main() {
    cin>>a>>b;
    for(long i=0;i<a;i++){
        cin>>t; v.push_back(t);
    }
    for(long i=0;i<b;i++){
        cin>>t; w.push_back(t);
    }
    sort(w.begin(), w.end());
    
    for(long i=0;i<a;i++){
        if(!binary_search(w.begin(), w.end(), v[i]))
            ans.push_back(v[i]);
    }
    
    sort(ans.begin(), ans.end());
    cout<<ans.size()<<'\n';
    for(auto a : ans) cout<<a<<' ';

    return 0;
}
