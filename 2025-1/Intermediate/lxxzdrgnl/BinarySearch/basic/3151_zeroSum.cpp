#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, input;
    cin >> N;
    vector<int> stus;
    for (int i = 0; i < N; i++) {
        cin >> input;
        stus.push_back(input);
    }
    sort(stus.begin(), stus.end());

    long long ans = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            int target = -stus[i] - stus[j];
            auto lb = lower_bound(stus.begin() + j + 1, stus.end(), target);
            auto ub = upper_bound(stus.begin() + j + 1, stus.end(), target);
            ans += ub - lb;
        }
    }
    cout << ans;
}