#include <bits/stdc++.h>
using namespace std;

int tri[501][501];
int dp[501][501];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> tri[i][j];
		}
	}
	dp[1][1] = tri[1][1];
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == 1) dp[i][j] = dp[i - 1][j] + tri[i][j];
			else if (j == i) dp[i][j] = dp[i - 1][j - 1] + tri[i][j];
			else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + tri[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		k = max(k, dp[n][i]);
	}
	cout << k;
	return 0;
}