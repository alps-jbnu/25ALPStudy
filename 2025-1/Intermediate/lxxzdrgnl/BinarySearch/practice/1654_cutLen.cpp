#include <bits/stdc++.h>
using namespace std;

int K, N;
int arr[10000];

bool solve(long long x) {
    long long cur = 0;
    for (int i = 0; i < K; i++) cur += arr[i] / x;
    return cur >= N;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> K >> N;

    for (int i = 0; i < K; i++) cin >> arr[i];
    long long st = 1;
    long long en = INT_MAX;

    while (st < en) {
        long long mid = (st + en + 1) / 2;
        if (solve(mid))
            st = mid;
        else
            en = mid - 1;
    }

    cout << st;
}
