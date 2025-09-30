#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
그냥 주어진 배열에서, 해당 수보다 작은 애들 몇개 있냐고
lower_bound 쓰면 될듯?
*/
ll n;
vector<ll> v,w;
queue<ll> q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    v.resize(n);
    for(auto &a:v) {
        cin>>a;
        q.push(a);
    }
    sort(v.begin(), v.end());

    w.push_back(v[0]);
    for(ll i=0;i<n;i++){
        if(w.back()!=v[i]) w.push_back(v[i]);
    }

    while(!q.empty()){
        ll t=lower_bound(w.begin(), w.end(), q.front())-w.begin();
        q.pop();
        cout<<t<<' ';
    }
}
