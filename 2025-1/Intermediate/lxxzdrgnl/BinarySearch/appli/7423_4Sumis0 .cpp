#include <bits/stdc++.h>
using namespace std;

int a[4000], b[4000], c[4000], d[4000];
long long cd[16000000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cd[i * N + j] = c[i] + d[j];

    sort(cd, cd + N * N);

    long long ans = 0;

    // a+b+c+d = 0 -> c+d = -a-b, -a-b 값을 탐색
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            ans += upper_bound(cd, cd + N * N, -a[i] - b[j]) - lower_bound(cd, cd + N * N, -a[i] - b[j]);

    cout << ans;
}