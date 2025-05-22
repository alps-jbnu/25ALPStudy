#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> arr;   // 입력받을 배열
vector<int> psum;  // 부분합 배열

int get_sum(int l, int r) {
    return psum[r] - psum[l - 1];
}

int solve(int l, int r) {
    if (l == r) return arr[l] * arr[l];

    int mid = (l + r) / 2;

    // 가운데를 포함하지 않는 구간 부분탐색
    int left = solve(l, mid);
    int right = solve(mid + 1, r);

    // 가운데 포함하는 구간
    int lo = mid, hi = mid + 1;
    int min_val = min(arr[lo], arr[hi]);
    int max_score = (arr[lo] + arr[hi]) * min_val;

    while (l < lo || hi < r) {
        if (hi < r && (lo == l || arr[lo - 1] < arr[hi + 1])) {
            hi++;
            min_val = min(min_val, arr[hi]);
        } else {
            lo--;
            min_val = min(min_val, arr[lo]);
        }
        max_score = max(max_score, get_sum(lo, hi) * min_val);
    }

    return max({left, right, max_score});
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    arr.resize(N + 2);
    psum.resize(N + 2);

    for (int i = 1; i <= N; ++i) {
        cin >> arr[i];
        psum[i] = psum[i - 1] + arr[i];
    }

    cout << solve(1, N);
}