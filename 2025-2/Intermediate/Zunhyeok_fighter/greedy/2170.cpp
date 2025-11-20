#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define M 1000001

pair<int, int> p[M];

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first)
		return a.second > b.second;
	else return a.first < b.first;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, sum = 0, plag_0 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		p[i] = make_pair(a, b);
	}
	sort(p, p + n, compare);
	int k = 1;
	int cur_en = p[0].second;
	sum = p[0].second - p[0].first;
	while (k < n) {
		if (p[k].second < cur_en) {}
		else if (p[k].first > cur_en) {
			sum += p[k].second - p[k].first;
			cur_en = p[k].second;
		}
		else if (p[k].first <= cur_en) {
			sum += p[k].second - cur_en;
			cur_en = p[k].second;
		}
		k++;
	}
	cout << sum;
	return 0;
}