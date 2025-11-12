#include <bits/stdc++.h>
using namespace std;

int dp[1001];

int main() {
	int n;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i == 1) dp[i] = 1;
		else if (i == 2) dp[i] = 3;
		else dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
	}
	cout << dp[n] << "\n";
	return 0;
}