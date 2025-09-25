// 백준 2805번: 나무 자르기
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n, m, max = 0;
    int tree[1000001];
    
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> tree[i];
    
    sort(tree, tree + n);
    
    ll low = 0;
    ll high = tree[n - 1];  // ll high = tree.back(); 도 가능
    
    while(low <= high){ //cut 가능할 때 까지
        ll sum = 0;
        ll cut = (low + high) / 2;
        
        for(int i = 0; i < n; i++) {
            if(tree[i] - cut > 0) 
                sum += tree[i] - cut; // cut 하고 남는 게 있다면 가져감
        }
        // 함수 대신 for문으로 구현
        if(sum >= m){ // m미터보다 가져간 나무가 같거나 많으면
            max = cut; // 현재 cut 지점을 최대 지점으로 저장
            low = cut + 1; // cut 가능 구간을 더 올림
        } 
        else
            high = cut - 1; // m미터가 안 되면 cut 가능 구간을 내림
    }
    
    cout << max; // 최대 cut 지점 출력
    
    return 0;
}
