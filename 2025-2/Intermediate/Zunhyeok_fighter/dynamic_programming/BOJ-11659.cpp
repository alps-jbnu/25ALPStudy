#include <bits/stdc++.h>
using namespace std;

int ns[100001];
int dp[100001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	cin >> ns[0];
	dp[0] = ns[0];
	for (int i = 1; i < n; i++) {
		cin >> ns[i];
		dp[i] = dp[i - 1] + ns[i];
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		if (a == 1) {
			cout << dp[b - 1] << "\n";
		}
		else {
			cout << dp[b - 1] - dp[a - 2] << "\n";
		}
	}
	return 0;
}