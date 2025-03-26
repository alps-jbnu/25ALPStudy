#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long N, input;
    cin >> N;

    vector<long long> solu;
    for (int i = 0; i < N; i++) {
        cin >> input;
        solu.push_back(input);
    }
    sort(solu.begin(), solu.end());

    long long ans[3] = {LLONG_MAX, LLONG_MAX, LLONG_MAX};

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            // a+b+c=0 -> c=-a-b
            long long target = -solu[i] - solu[j];
            auto it = lower_bound(solu.begin(), solu.end(), target);  // literator로 반환됨
            int idx = it - solu.begin();

            // 주변값도 탐색
            for (int k = -3; k <= 3; k++) {
                int t = idx + k;
                if (t == i || t == j) continue;
                if (t < 0 || t >= N) continue;

                long long sum = solu[i] + solu[j] + solu[t];
                long long best_sum = ans[0] + ans[1] + ans[2];

                if (abs(sum) < abs(best_sum)) {
                    ans[0] = solu[i];
                    ans[1] = solu[j];
                    ans[2] = solu[t];
                }
            }
        }
    }

    sort(ans, ans + 3);
    cout << ans[0] << " " << ans[1] << " " << ans[2];
}