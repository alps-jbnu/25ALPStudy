#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

pair<int, int> d[100001];

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second < b.second)
		return true;
	else if (a.second == b.second)
		return a.first < b.first;
	else
		return false;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		d[i] = make_pair(a, b);
	}
	sort(d, d + n, compare);
	int st = d[0].first; int k = 0;
	while (k < n) {
		if (st <= d[k].first) {
			st = d[k].second;
			max++;
		}
		k++;
	}
	cout << max;
	return 0;
}