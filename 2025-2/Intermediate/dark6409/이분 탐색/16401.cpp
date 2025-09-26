#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,m; // 사람수, 과자수
vector<ll> v; // 과자 길이

bool run(ll mid){
    ll res=0; // 나눠줄 수 있는 사람
    for(auto &a : v) res+=a/mid; // 각 과자마다 기준 길이로 나누고, 그걸 몇 명한테 나눠줄 수 있는지 합산
    
    return res>=n; // 목표 사람 수 채울 수 있으면 TRUE
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>m;
    v.resize(m);
    for(auto &a : v) cin>>a;

    ll yes=0, no=1e9; // 과자 길이 탐색할 범위 설정

    while(yes+1<no){ // 이분탐색 끝나기 전까지
        ll mid=(yes+no)/2; // 이분탐색 중간
        // ll m((yes+no)>>1); // 이렇게 써도 같은 의미 ( 이진수>>1 시프트하면 2로 나누는거니까 )
        
        if(run(mid)) yes=mid; // 목표 사람만큼 나눠줄 수 있으면, 과자길이가 좀더 길 때를 해보자 (0이면 무한하게 나눠줄 수 있으니, 자동으로 0일 경우도 커버 가능. (길이가 0이 될때면 어차피 못 나눠준다는 의미))
        else no=mid; // 목표 사람만큼 못 나눠주면, 이분탐색 범위용 끝인덱스로 설정
    }
    cout<<yes;
}
