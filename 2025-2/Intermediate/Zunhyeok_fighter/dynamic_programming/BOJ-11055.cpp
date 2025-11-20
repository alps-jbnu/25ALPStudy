#include <bits/stdc++.h>
using namespace std;

int dp[1001];
int arr[1001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> arr[i];
	dp[1] = arr[1];
	int max_sum = dp[1];
	for (int i = 2; i <= n; i++) {
		dp[i] = arr[i];
		for (int j = i - 1; j >= 1; j--) {
			if (arr[j] < arr[i]) {
				dp[i] = max(dp[j] + arr[i], dp[i]);
			}
		}
		max_sum = max(max_sum, dp[i]);
	}
	cout << max_sum << '\n';
	return 0;
}