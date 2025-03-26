#include <bits/stdc++.h>

using namespace std;

vector<int> getIndex(vector<int> planets) {
    int N = planets.size();

    vector<int> sorted = planets;
    sort(sorted.begin(), sorted.end());

    vector<int> pattern;
    for (int i = 0; i < N; i++) {
        int idx = lower_bound(sorted.begin(), sorted.end(), planets[i]) - sorted.begin();
        pattern.push_back(idx);
    }
    return pattern;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> M >> N;

    vector<vector<int>> universes(M);

    // 배열들을 전부 인덱스화 시켜서 동일한지 판단
    for (int i = 0; i < M; i++) {
        vector<int> planets(N);
        for (int j = 0; j < N; j++) {
            cin >> planets[j];
        }
        universes[i] = getIndex(planets);
    }

    int result = 0;

    for (int i = 0; i < M; i++) {
        for (int j = i + 1; j < M; j++) {
            if (universes[i] == universes[j]) {
                result++;
            }
        }
    }

    cout << result;
    return 0;
}