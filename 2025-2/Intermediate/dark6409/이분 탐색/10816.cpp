#include <bits/stdc++.h>
using namespace std;

int n,m,t;
vector<long> v;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      
    cin>>n;
    for(long i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    
    cin>>m;
    for(long i=0;i<m;i++){
        cin>>t;
        long a=upper_bound(v.begin(), v.end(), t)-v.begin(), // t 초과 수가 처음 나오는 위치
             b=lower_bound(v.begin(), v.end(), t)-v.begin(); // t 이상 수가 처음 나오는 위치
        cout<<a-b<<' ';
    }
}
