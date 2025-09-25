#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d, k, c;
    cin >> n >> d >> k >> c;

    vector<int> belt(n);
    for (int i = 0; i < n; ++i) {
        cin >> belt[i];
    }

    for (int i = 0; i < k - 1; ++i) {
        belt.push_back(belt[i]);
    }

    vector<int> eaten(d + 1, 0);

    int distinct_count = 0;
    for (int i = 0; i < k; ++i) {
        if (eaten[belt[i]] == 0) {
            distinct_count++;
        }
        eaten[belt[i]]++;
    }

    int max_distinct = distinct_count;
    if (eaten[c] == 0) {
        max_distinct++;
    }

    for (int i = 1; i < n; ++i) {
        int sushi_out = belt[i - 1];
        eaten[sushi_out]--;
        if (eaten[sushi_out] == 0) {
            distinct_count--;
        }

        int sushi_in = belt[i + k - 1];
        if (eaten[sushi_in] == 0) {
            distinct_count++;
        }
        eaten[sushi_in]++;

        int current_total = distinct_count;
        if (eaten[c] == 0) {
            current_total++;
        }
        max_distinct = max(max_distinct, current_total);
    }

    cout << max_distinct << endl;

    return 0;
}
