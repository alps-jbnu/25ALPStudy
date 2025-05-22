#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N;
    vector<pair<int, int>> flowers;

    cin >> N;
    for (int i = 0; i < N; i++) {
        int sm, sd, em, ed;
        cin >> sm >> sd >> em >> ed;
        flowers.push_back({sm * 100 + sd, em * 100 + ed});
    }

    sort(flowers.begin(), flowers.end());

    int cur = 301;
    int end = 1201;
    int cnt = 0;
    int idx = 0;

    while (cur < end) {
        int max_end = cur;

        while (idx < N && flowers[idx].first <= cur) {
            if (flowers[idx].second > max_end) {
                max_end = flowers[idx].second;
            }
            idx++;
        }

        if (max_end == cur) {
            cout << 0;
            return 0;
        }

        cur = max_end;
        cnt++;
    }

    cout << cnt;
}