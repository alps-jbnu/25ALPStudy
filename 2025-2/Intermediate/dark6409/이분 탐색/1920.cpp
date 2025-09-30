#include <bits/stdc++.h>
using namespace std;

int a,b,t;
vector<long> v;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    cin>>a;
    for(long i=0;i<a;i++){
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    
    cin>>b;
    for(long i=0;i<b;i++){
        cin>>t;
        cout<<binary_search(v.begin(), v.end(), t)<<'\n';
    }
}
