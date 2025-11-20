#include <bits/stdc++.h>
using namespace std;
#define endl '\n';

int coin[20];
int dp[10001];

int main() {
	int t, n, target;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> coin[j];
		}
		cin >> target;
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		for (int j = 0; j < n; j++) {
			for (int k = coin[j]; k <= target; k++) {
				dp[k] += dp[k - coin[j]];
			}
		}
		cout << dp[target] << endl;
	}
	return 0;
}