#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M, input;
    cin >> N >> M;

    vector<int> trees;
    for (int i = 0; i < N; i++) {
        cin >> input;
        trees.push_back(input);
    }

    sort(trees.begin(), trees.end());

    int st = 0;
    int en = trees[N - 1];
    long long result = 0;

    while (st <= en) {
        int mid = (st + en) / 2;
        long long total = 0;

        for (int i = 0; i < N; i++) {
            if (trees[i] > mid) {
                total += (trees[i] - mid);
            }
        }

        if (total < M) {
            en = mid - 1;
        } else {
            result = mid;
            st = mid + 1;
        }
    }

    cout << result << '\n';
    return 0;
}