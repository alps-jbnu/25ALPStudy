#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N, K;
    cin >> N >> K;

    vector<int> order(K);
    for (int i = 0; i < K; i++) {
        cin >> order[i];
    }

    vector<int> plug;
    int cnt = 0;

    for (int i = 0; i < K; i++) {
        int now = order[i];

        // 이미 멀티탭에 꽂혀 있는 경우
        if (find(plug.begin(), plug.end(), now) != plug.end()) {
            continue;
        }

        // 멀티탭에 빈 자리가 있는 경우
        if (plug.size() < N) {
            plug.push_back(now);
        } else {
            // 멀티탭에 빈 자리가 없을 때
            int out = -1, farthest = -1;

            for (int j = 0; j < plug.size(); j++) {
                int device = plug[j];
                int next_use = -1;

                // 해당 장치가 이후에 사용되는지 체크
                for (int t = i + 1; t < K; t++) {
                    if (order[t] == device) {
                        next_use = t;
                        break;
                    }
                }

                // 이후에 사용되지 않으면 바로 뺌
                if (next_use == -1) {
                    out = j;
                    break;
                }

                // 가장 늦게 사용되는 경우
                if (next_use > farthest) {
                    farthest = next_use;
                    out = j;
                }
            }

            plug[out] = now;
            cnt++;
        }
    }

    cout << cnt;
}
