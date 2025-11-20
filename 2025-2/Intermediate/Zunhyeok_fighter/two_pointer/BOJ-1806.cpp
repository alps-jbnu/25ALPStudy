#include <bits/stdc++.h>
using namespace std;

int arr[100001];

int main() {
	int n, s, min_len = INT_MAX;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int st = 0, en = 0, cur_num = 0;
	while (st < n) {
		if (cur_num >= s) {
			min_len = min(min_len, en - st);
			cur_num -= arr[st];
			st++;
		}
		else {
			if (en < n) {
				cur_num += arr[en];
				en++;
			}
			else break;
		}
	}
	if (min_len == INT_MAX) min_len = 0;
	cout << min_len;
	return 0;
}