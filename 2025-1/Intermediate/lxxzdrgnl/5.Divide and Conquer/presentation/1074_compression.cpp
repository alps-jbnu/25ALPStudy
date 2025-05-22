#include <bits/stdc++.h>

using namespace std;

int visit(int N, int r, int c) {
    if (N == 0) return 0;

    int half = 1 << (N - 1);
    int area = half * half;

    if (r < half && c < half) {
        // 1사분면
        return visit(N - 1, r, c);
    } else if (r < half && c >= half) {
        // 2사분면
        return area + visit(N - 1, r, c - half);
    } else if (r >= half && c < half) {
        // 3사분면
        return 2 * area + visit(N - 1, r - half, c);
    } else {
        // 4사분면
        return 3 * area + visit(N - 1, r - half, c - half);
    }
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int N, r, c;
    cin >> N >> r >> c;

    cout << visit(N, r, c);
}