#include <bits/stdc++.h>

using namespace std;

int arr[1000];
vector<int> pls;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) cin >> arr[i];

    sort(arr, arr + N);

    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++)
            pls.push_back(arr[i] + arr[j]);
    }

    sort(pls.begin(), pls.end());

    for (int i = N - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (binary_search(pls.begin(), pls.end(), arr[i] - arr[j])) {
                cout << arr[i];
                return 0;
            }
        }
    }
}