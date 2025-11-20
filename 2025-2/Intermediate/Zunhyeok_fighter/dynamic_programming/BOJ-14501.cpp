#include <bits/stdc++.h>
using namespace std;

int dp[16];
int cnsl[16][2];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> cnsl[i][0] >> cnsl[i][1];
	}
	int max_propit = 0;
	for (int i = 1; i <= n; i++) {
		int p = i;
		while (1) {
			int nxt_day = cnsl[p][0] + p;
			if (nxt_day >= n + 1) {
				if (nxt_day == n + 1) {
					dp[nxt_day] = max(dp[nxt_day], dp[p] + cnsl[p][1]);
					max_propit = max(max_propit, dp[nxt_day]);
				}
				break;
			}
			else {
				dp[nxt_day] = max(dp[nxt_day], dp[p] + cnsl[p][1]);
				for (int j = nxt_day + 1; j <= n; j++) {
					if (dp[j] > dp[nxt_day]) break;
					else dp[j] = dp[nxt_day];
				}
			}
			p = nxt_day;
			max_propit = max(max_propit, dp[p]);
		}
	}
	cout << max_propit << "\n";
	return 0;
}