#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define M 1000001
#define ll long long

ll p[M];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t, n;
	ll max_propit;
	cin >> t;
	while (t--) {
		max_propit = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> p[i];
		}
		int i = n;
		while (i > 0) {
			int cur_p = p[i];
			int k = i - 1;
			while (k) {
				if (p[k] <= cur_p) max_propit += cur_p - p[k];
				else {
					i = k;
					break;
				}
				k--;
			}
			if (k == 0) break;
		}
		cout << max_propit << endl;
	}
	return 0;
}