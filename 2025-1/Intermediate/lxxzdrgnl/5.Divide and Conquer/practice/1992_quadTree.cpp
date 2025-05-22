#include <bits/stdc++.h>
using namespace std;

int N;
vector<vector<int>> arr;

bool check(int x, int y, int size) {
    int start = arr[x][y];
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (arr[i][j] != start)
                return false;
        }
    }
    return true;
}

string quadTree(int x, int y, int size) {
    if (check(x, y, size)) {
        return to_string(arr[x][y]);
    }

    int half = size / 2;
    string result = "(";
    result += quadTree(x, y, half);                // 왼쪽 위
    result += quadTree(x, y + half, half);         // 오른쪽 위
    result += quadTree(x + half, y, half);         // 왼쪽 아래
    result += quadTree(x + half, y + half, half);  // 오른쪽 아래
    result += ")";
    return result;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> N;
    arr = vector<vector<int>>(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < N; j++) {
            arr[i][j] = row[j] - '0';
        }
    }

    cout << quadTree(0, 0, N);
}