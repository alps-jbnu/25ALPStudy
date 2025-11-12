#include <bits/stdc++.h>
using namespace std;

int dp[1000000];
int pre[1000000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n;
	k = n;
	dp[1] = 0;
	pre[1] = 0;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		pre[i] = i - 1;
		if (i % 3 == 0 && dp[i] > dp[i / 3] + 1) {
			dp[i] = dp[i / 3] + 1;
			pre[i] = i / 3;
		}
		if (i % 2 == 0 && dp[i] > dp[i / 2] + 1) {
			dp[i] = dp[i / 2] + 1;
			pre[i] = i / 2;
		}
	}
	cout << dp[n] << "\n";
	while (1) {
		cout << n << " ";
		if (n == 1) break;
		n = pre[n];
	}
	return 0;
}