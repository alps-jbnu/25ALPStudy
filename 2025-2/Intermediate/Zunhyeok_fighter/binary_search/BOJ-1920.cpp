#include <bits/stdc++.h>
using namespace std;
const int MAX = 100000;
int arr[MAX];

void binary_search(int st, int en, int target) {
	while (!(st > en)) {
		int mid = (st + en) / 2;
		if (arr[mid] == target) {
			cout << "1\n";
			return;
		}
		else if (arr[mid] > target) {
			en = mid - 1;
		}
		else {
			st = mid + 1;
		}
	}
	cout << "0\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	cin >> M;
	for (int i = 0; i < M; i++) {
		int num;
		cin >> num;
		binary_search(0, N - 1, num);
	}
	return 0;
}