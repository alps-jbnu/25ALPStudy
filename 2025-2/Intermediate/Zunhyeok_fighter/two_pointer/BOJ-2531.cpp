#include <bits/stdc++.h>
using namespace std;

int arr[30001];
int sushi_check[3001];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, d, k, c;
	cin >> n >> d >> k >> c;
	for (int i = 0; i < n;i++) {
		cin >> arr[i];
	}
	int st = 0, en = 0, cnt = 0, max_sushitype = 0, cur_dish = 0;
	while (st < n) {
		if (cur_dish < k) {
			if (sushi_check[arr[en]] == 0) {
				sushi_check[arr[en]]++;
				en++;
				if (en > n - 1) en = 0;
				cnt++;
				cur_dish++;
			}
			else {
				sushi_check[arr[en]]++;
				en++;
				if (en > n - 1) en = 0;
				cur_dish++;
			}
		}
		else {
			if (sushi_check[c] == 0) {
				max_sushitype = max(max_sushitype, cnt + 1);
			}
			else {
				max_sushitype = max(max_sushitype, cnt);
			}
			sushi_check[arr[st]]--;
			if (sushi_check[arr[st]] == 0) cnt--;
			st++;
			cur_dish--;
		}
	}
	cout << max_sushitype;
	return 0;
}