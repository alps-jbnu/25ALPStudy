#include <bits/stdc++.h>
using namespace std;

int arr[10001];
long long cnt = 0;

void binary_search(int st, int en, int a ,int b) {
	while( st <= en){
		int mid = (st + en) / 2;
		if(arr[a] + arr[b] + arr[mid] == 0) {
			if (a != mid && b != mid) { // 중복되는 경우 제외
				int en2 = mid - 1, st2 = mid + 1;
				while (st <= en2) { //target만 있는 배열의 시작점
					int mid2 = (st + en2) / 2;
					if (arr[mid2] == arr[mid]) en2 = mid2 - 1;
					else st = mid2 + 1;
				}
				while (st2 <= en) { //target만 있는 배열의 끝점 
					int mid2 = (st2 + en) / 2;
					if (arr[mid2] == arr[mid]) st2 = mid2 + 1;
					else en = mid2 - 1;
				}
				cnt += st2 - en2 - 1; // target만 있는 배열의 길이를 더해줌
				return;
			}
		}
		else if (arr[a] + arr[b] + arr[mid] < 0) {
			st = mid + 1;
		}
		else {
			en = mid - 1;
		}
	}
}

int main() {
	cin.tie(0); cout.tie(0);
	ios_base::sync_with_stdio(false);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			binary_search(j + 1, N - 1, i, j); // i, j 제외 나머지 이분탐색
		}
	}
	cout << cnt;
	return 0;
}