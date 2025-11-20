#include <bits/stdc++.h>
using namespace std;

long long dp[100001];
long long arr[100001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> arr[i];
	dp[1] = arr[1];
	long long max_sum = dp[1];
	for (int i = 2; i <= n; i++) {
		dp[i] = max(arr[i] + dp[i - 1], arr[i]);
		max_sum = max(dp[i], max_sum);
	}
	cout << max_sum << '\n';
	return 0;
}