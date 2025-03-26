#include <bits/stdc++.h>
using namespace std;

int arrA[500000];
int arrB[500000];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int A, B;
    cin >> A >> B;

    for (int i = 0; i < A; i++) cin >> arrA[i];
    for (int i = 0; i < B; i++) cin >> arrB[i];

    sort(arrB, arrB + B);

    vector<int> result;

    for (int i = 0; i < A; i++) {
        if (!binary_search(arrB, arrB + B, arrA[i])) {
            result.push_back(arrA[i]);
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << '\n';

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << ' ';
    }
}