#include <bits/stdc++.h>
using namespace std;
const int MAX = 500000;
int arr[MAX];

int binary_search(int st, int en, int target) {
	int cnt = 0;
	while (st <= en) {
		int mid = (st + en) / 2;
		if (arr[mid] == target) {
			int en2 = mid - 1, st2 = mid + 1;
			while (st <= en2) { //target만 있는 배열의 시작점
				int mid2 = (st + en2) / 2;
				if (arr[mid2] == target) en2 = mid2 - 1;
				else st = mid2 + 1;
			}
			while (st2 <= en) { //target만 있는 배열의 끝점 
				int mid2 = (st2 + en) / 2;
				if (arr[mid2] == target) st2 = mid2 + 1;
				else en = mid2 - 1;
			}
			cnt = st2 - st;
			return cnt;
		}
		else if (arr[mid] < target) st = mid + 1;
		else en = mid - 1;
	}
	return cnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N, M;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N); //이진 탐색위한 정렬
	cin >> M;
	for (int i = 0; i < M; i++) {
		int a;
		cin >> a;
		cout << binary_search(0, N - 1, a) <<"\n";
	}
	return 0;
}