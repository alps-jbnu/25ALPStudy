#include <bits/stdc++.h>

using namespace std;

int arr[100000];

int N;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; i++) cin >> arr[i];

    sort(arr, arr + N);

    int M;
    cin >> M;
    while (M--) {
        int a;
        cin >> a;
        cout << binary_search(arr, arr + N, a) << '\n';
    }
}