#include <bits/stdc++.h>
using namespace std;

int arr[200001];
int num_check[100001];

int main() {
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int st = 0, en = 0, max_seq_len = 0;
	while (en < n) {
		if (num_check[arr[en]] < k) {
			num_check[arr[en]]++;
			en++;
		}
		else {
			num_check[arr[st]]--;
			st++;
		}
		max_seq_len = max(max_seq_len, en - st);
	}
	cout << max_seq_len;
	return 0;
}