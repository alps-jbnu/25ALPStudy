#include <bits/stdc++.h>

using namespace std;

void fastIO() { cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false); }

int main() {
    int n = 0; cin >> n;

    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) cout << '*';
        for(int j = 0; j < n - i; j++) cout << "  ";
        for(int j = 0; j < i; j++) cout << '*';
        cout << '\n';
    }

    for(int i = n; i > 0; i--) {
        for(int j = 0; j < i; j++) cout << '*';
        for(int j = 0; j < n - i; j++) cout << "  ";
        for(int j = 0; j < i; j++) cout << '*';
        cout << '\n';
    }

    return 0;
}