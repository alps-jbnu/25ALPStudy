#include <bits/stdc++.h>
using namespace std;

int arr_n[4000001];
int arr_p[4000001];

int main() {
	int n;
	cin >> n;
	int j = 0;
	for (int i = 2; i <= n; i++) {
		if (!arr_n[i]) {
			arr_p[j] = i;
			arr_n[i] = 1;
			j++;
		}
		int t = 1;
		while (t * i <= n) {
			arr_n[t * i] = 1;
			t++;
		}
	}
	int st = 0, en = 0, sum = 0, cnt = 0;
	while (st < j) {
		if (sum == n) {
			cnt++;
			sum -= arr_p[st];
			st++;
		}
		else if (sum < n) {
			sum += arr_p[en];
			en++;
			if (en > n) break;
		}
		else {
			sum -= arr_p[st];
			st++;
		}
	}
	cout << cnt;
	return 0;
}