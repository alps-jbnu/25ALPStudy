// 백준 2473번 세 용액
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll; 
ll n;
ll a[5004];
ll ans[4];
//이 문제에서는 10억짜리 용액 3개가 합쳐진 30억을 최대로 잡고 풀어도 된다.
//문제 풀 때 이런 부분들은 빠르게 넘어갈 수 있도록 int의 최댓값 1e9, long long의 최댓값 1e18로 두고 넘어간다.
ll ret = 1e18; 

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	for(int i = 0; i <= n-3; i++){  // 최소 두 개 요소가 남아야 함
		ll st = i + 1; // 두 번째 용액 시작 위치
		ll en = n - 1;
		while(st < en){ //투 포인터 알고리즘 
            // st <= en로 하면 안됨!
            // st == en일 때는 3가지 용액을 모두 선택할 수 없기 때문
			ll v = a[i] + a[st] + a[en];
            // 절댓값 최소 갱신
			if(abs(v) < ret){ //세 용액을 합쳤을 때 절대값이 이전에 구했던 합보다 0에 더 가까운지 확인한다.
				ret = abs(v); //ret을 갱신!
				ans[1] = a[i];
				ans[2] = a[st];
				ans[3] = a[en];
			}
            // 포인터 이동
			if(v < 0) st++; //합이 0보다 작을 경우 st를 오른쪽으로 한 칸 이동시킨다.
			else en--; //합이 0보다 크거나 같은 경우 en를 왼쪽으로 한 칸 이동시킨다.
		}
	}
	cout << ans[1] << ' ' << ans[2] << ' ' << ans[3];
	return 0;
}
