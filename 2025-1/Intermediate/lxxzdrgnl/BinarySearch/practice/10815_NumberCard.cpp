#include <bits/stdc++.h>

using namespace std;

int arr[500000];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];
    sort(arr, arr + N);

    int M, t;
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> t;
        cout << (binary_search(arr, arr + N, t) ? 1 : 0) << " ";
    }
}