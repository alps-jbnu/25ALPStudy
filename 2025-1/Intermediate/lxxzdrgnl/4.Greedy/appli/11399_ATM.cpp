#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }

    sort(P.begin(), P.end());

    int total = 0, sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += P[i];
        total += sum;
    }

    cout << total << '\n';
}
