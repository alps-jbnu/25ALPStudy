#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, input;
    cin >> N;

    vector<int> solu;
    for (int i = 0; i < N; i++) {
        cin >> input;
        solu.push_back(input);
    }

    int st = 0;
    int end = N - 1;
    int min = INT_MAX;
    int left = solu[st];
    int right = solu[end];

    while (st < end) {
        int sum = solu[st] + solu[end];
        int abss = abs(sum);

        if (abss < min) {
            min = abss;
            left = solu[st];
            right = solu[end];
        }

        if (sum < 0)
            st++;
        else
            end--;
    }

    cout << left << " " << right;
    return 0;
}