#include <bits/stdc++.h>
using namespace std;

int arr1[1001];
int arr2[1001];
int cnb[1000001];

int main() {
	int n, k, max_index = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr1[i] >> arr2[i];
		max_index = max(arr2[i], max_index);
	}
	for (int i = 0; i < n; i++) {
		for (int j = arr1[i]; j < arr2[i]; j++) {
			cnb[j]++;
		}
	}
	int a = INT_MAX, b = INT_MAX;
	int st = 0, en = 0, sum = 0;
	while (en <= max_index) {
		if (sum == k) {
			a = st; b = en;
			break;
		}
		else if (sum < k) {
			sum += cnb[en];
			en++;
		}
		else {
			sum -= cnb[st];
			st++;
		}
	}
	if (a == INT_MAX && b == INT_MAX) { a = 0; b = 0; }
	cout << a << " " << b;
	return 0;
}