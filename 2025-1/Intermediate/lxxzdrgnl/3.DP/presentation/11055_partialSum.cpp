#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> dp(N);

    int result = 0;

    for (int i = 0; i < N; i++) {
        dp[i] = A[i];
        for (int j = 0; j < i; j++) {
            if (A[j] < A[i]) {
                dp[i] = max(dp[i], dp[j] + A[i]);
            }
        }
        result = max(result, dp[i]);
    }

    cout << result;
}
