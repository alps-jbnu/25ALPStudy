#include <bits/stdc++.h>
using namespace std;

int N, C;
int x[200000];

bool solve(int dist) {
    int cnt = 1;
    int last = x[0];

    for (int i = 1; i < N; i++) {
        if (x[i] - last >= dist) {
            cnt++;
            last = x[i];
        }
    }

    return cnt >= C;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> C;
    for (int i = 0; i < N; i++) cin >> x[i];
    sort(x, x + N);

    int st = 1;
    int en = x[N - 1] - x[0];
    int ans = 0;

    while (st <= en) {
        int mid = (st + en) / 2;
        if (solve(mid)) {
            ans = mid;
            st = mid + 1;
        } else {
            en = mid - 1;
        }
    }

    cout << ans << '\n';
}
