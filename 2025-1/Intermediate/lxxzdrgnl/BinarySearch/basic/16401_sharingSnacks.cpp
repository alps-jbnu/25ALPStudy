#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int M, N, input;
    cin >> M >> N;

    vector<int> snacks;

    for (int i = 0; i < N; i++) {
        cin >> input;
        snacks.push_back(input);
    }

    sort(snacks.begin(), snacks.end());

    int st = 1;
    int en = snacks[N - 1];

    int result = 0;

    while (st <= en) {
        int mid = (st + en) / 2;

        int cnt = 0;  // 먹을 수 있는 조카 수

        for (int i = 0; i < N; i++) {
            cnt += snacks[i] / mid;
        }

        if (cnt < M) {
            en = mid - 1;
        } else {
            result = mid;
            st = mid + 1;
        }
    }

    cout << result << '\n';
    return 0;
}