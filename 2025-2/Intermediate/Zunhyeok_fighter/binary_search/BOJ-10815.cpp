#include <bits/stdc++.h>
using namespace std;
const int MAX = 500000;
int arr[MAX];

void binary_search(int st, int en, int target) {
	while (en >= st) { // st가 en보다 커지면 종료
		int mid = (st + en) / 2; // 중간값
		if (arr[mid] == target) { // 찾음
			cout << 1 << " ";
			return;
		}
		else if (arr[mid] < target) { // mid가 target보다 작다면
			st = mid + 1;
		}
		else { // mid가 target보다 크다면
			en = mid - 1;
		}
	}
	cout << 0 << " "; // 못찾음
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
		binary_search(0, N - 1, a);
	}
	return 0;
}