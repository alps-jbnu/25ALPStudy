#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int st = 0, en = 0, max_len = 0, del_num = 0, cnt = 0;
	while (en < n) {
		if (arr[en] % 2) {
			if (del_num < k) {
				en++;
				del_num++;
			}
			else {
				if (arr[st] % 2) {
					del_num--;
				}
				else {
					cnt--;
				}
				st++;
			}
		}
		else {
			en++;
			cnt++;
			max_len = max(max_len, cnt);
		}
	}
	max_len = max(max_len, cnt);
	cout << max_len;
	return 0;
}