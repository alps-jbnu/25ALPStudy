#include <bits/stdc++.h>
using namespace std;

int dp[1500001];
int t[1500001], p[1500001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> t[i] >> p[i];
    }

    for (int i = 1; i <= n; i++) {
        dp[i] = max(dp[i], dp[i - 1]);
        if (i + t[i] - 1 <= n) {
            dp[i + t[i] - 1] = max(dp[i + t[i] - 1], dp[i - 1] + p[i]);
        }
    }
    cout << max(dp[n], dp[n - 1]) << "\n";

    return 0;
}