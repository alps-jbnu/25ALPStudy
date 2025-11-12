#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll liq[5001];

int main() {
	int N;
	int ans1, ans2, ans3;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> liq[i];
	}
	sort(liq, liq + N);
	ll c_num = LLONG_MAX;
	for (int i = 0; i < N - 2; i++) { //첫번째 용액 고정
		for (int j = N - 1; j > 1; j--) { // 두번째 용액 고정
			int st = i, en = j;
			while (st <= en) {  //첫번째와 두번째 사이에서 세번째 용액 이분탐색으로 찾기~
				int mid = (st + en) / 2;
				ll sum = liq[i] + liq[j] + liq[mid];
				if (i != mid && j != mid) {
					if (abs(sum) < c_num) {
						c_num = abs(sum);
						ans1 = i; ans2 = mid; ans3 = j; //0에 가까운 세용액의 합 갱신~
					}
				}
				if (sum < 0)
					st = mid + 1;
				else
					en = mid - 1;
			}
		}
	}
	cout << liq[ans1] << " " << liq[ans2] << " " << liq[ans3];
	return 0;
}