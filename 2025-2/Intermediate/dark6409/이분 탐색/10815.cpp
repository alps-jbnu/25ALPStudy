#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<long> v;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n;
    for(long i=0;i<n;i++){
        cin>>m;
        v.push_back(m);
    }
    sort(v.begin(), v.end());
    
    cin>>m;
    for(long i=0;i<m;i++){
        cin>>n;
        cout<<binary_search(v.begin(), v.end(), n)<<' ';
    }
}
