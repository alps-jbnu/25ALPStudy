#include <bits/stdc++.h>
using namespace std;

long long dp[101];
long long num[102][10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    long long a;
    dp[1] = 9;
    for (int i = 1; i < 10; i++) num[2][i]++;
    for (int i = 2; i <= n; i++) {
        a = (num[i][0] + num[i][9]) % 1000000000;
        dp[i] = (dp[i - 1] * 2) % 1000000000 - a;
        if (dp[i] < 0) dp[i] = (dp[i] + 1000000000) % 1000000000;
        for (int j = 0; j <= 9; j++) {
            if (j - 1 >= 0) num[i + 1][j - 1] += num[i][j] % 1000000000;
            if (j + 1 <= 9) num[i + 1][j + 1] += num[i][j] % 1000000000;
        }
    }
    cout << dp[n];
    return 0;
}