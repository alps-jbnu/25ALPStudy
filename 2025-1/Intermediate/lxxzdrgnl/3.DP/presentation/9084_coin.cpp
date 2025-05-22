#include <bits/stdc++.h>

using namespace std;
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int T, N, M;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;
        vector<int> coins(N);

        for (int i = 0; i < N; i++) {
            cin >> coins[i];
        }

        cin >> M;
        vector<int> dp(M + 1, 0);

        dp[0] = 1;

        for (int j = 0; j < N; j++) {
            int coin = coins[j];
            for (int k = coin; k <= M; k++) {
                dp[k] += dp[k - coin];
            }
        }

        cout << dp[M] << '\n';
    }
}