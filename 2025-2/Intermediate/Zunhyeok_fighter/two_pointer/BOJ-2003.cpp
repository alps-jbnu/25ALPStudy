#include <bits/stdc++.h>
using namespace std;

int arr[10001];

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int st = 0, en = 0, cnt = 0, sum = 0;
	while (st < n) {
		if (sum == m) {
			cnt++;
			sum -= arr[st];
			st++;
		}
		else if (sum < m) {
			if (en > n - 1) break;
			sum += arr[en];
			en++;
		}
		else if (sum > m) {
			sum -= arr[st];
			st++;
		}
	}
	cout << cnt;
	return 0;
}