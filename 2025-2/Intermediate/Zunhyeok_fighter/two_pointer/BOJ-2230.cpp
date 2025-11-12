#include <bits/stdc++.h>
using namespace std;

int arr[100001];

int main() {
	int n, m, min_num = INT_MAX;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int st = 0, en = 0;
	while (en <= n - 1) {
		if (st == en) en++;
		else if (arr[en] - arr[st] >= m) {
			min_num = min(arr[en] - arr[st], min_num);
			st++;
		}
		else en++;
	}
	cout << min_num;
	return 0;
}