#include <bits/stdc++.h>
using namespace std;

long long dp[101];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, n;
	cin >> T;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	dp[5] = 2;
	for (int i = 0; i < T; i++) {
		cin >> n;
		for (int i = 6; i <= n; i++) {
			dp[i] = dp[i - 1] + dp[i - 5];
		}
		cout << dp[n] << "\n";
	}
	return 0;
}