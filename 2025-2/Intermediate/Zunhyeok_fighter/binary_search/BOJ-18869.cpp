#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> planet;

planet p[100][10000];

bool cmp1(pair<int, int>& a, pair<int, int>& b) {
	return a.first < b.first;
}

bool cmp2(pair<int, int>& a, pair<int, int>& b) {
	return a.second < b.second;
}

int main() {
	int M, N;
	int pre, cnt, pair_cnt = 0;
	cin >> M >> N;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> p[i][j].first;
			p[i][j].second = j;
		}
		sort(p[i], p[i] + N, cmp1);
		pre = -1; cnt = 0;
		for (int j = 0; j < N; j++) {
			if (pre == p[i][j].first) {
				p[i][j].first = cnt;
				continue;
			}
			else {
				pre = p[i][j].first;
				p[i][j].first = ++cnt;
			}
		}
		sort(p[i], p[i] + N, cmp2);
	}
	string uni[100];
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			uni[i] += p[i][j].first;
		}
	}
	sort(uni, uni + M);
	tuple<string, int> uni_du[100];
	string pre_s = "";
	int k = 0;
	for (int i = 0; i < M; i++) {
		if (pre_s != uni[i]) {
			uni_du[k++] = make_tuple(uni[i], 0);
			pre_s = uni[i];
		}
	}
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < k; j++) {
			if (get<0>(uni_du[j]) == uni[i])
				get<1>(uni_du[j])++;
		}
	}
	int sum = 0;
	for (int i = 0; i < k; i++) {
		if (get<1>(uni_du[i]) > 1) {
			int a = get<1>(uni_du[i]);
			sum += a * (a - 1) / 2;
		}
	}
	cout << sum;
	return 0;
}