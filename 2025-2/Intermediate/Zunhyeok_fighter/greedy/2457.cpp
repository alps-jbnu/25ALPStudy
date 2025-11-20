#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define M 100001

pair<int, int> flr[M];

int cal(int a, int b) {
	int n = 0;
	for (int i = 1; i < a; i++) {
		if (i == 2) n += 28;
		else if (i == 4 || i == 6 || i == 9 || i == 11) n += 30;
		else n += 31;
	}
	n += b;
	return n;
}

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first)
		return a.second > b.second;
	else return a.first < b.first;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, num = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		flr[i].first = cal(a, b); flr[i].second = cal(c, d);
	}
	sort(flr, flr + n, compare);
	int cur_en = 60, cur_st = 60;
	int i = 0;
	while (i < n) {
		if (cur_en > 334) break;
		if (flr[i].first <= cur_en) {
			if (flr[i].first <= cur_st) {
				if (flr[i].second >= cur_en) {
					cur_en = flr[i].second;
					i++;
				}
				else {
					i++;
				}
			}
			else if (flr[i].second >= cur_en) {
				cur_st = cur_en;
				cur_en = flr[i].second;
				num++;
				i++;
			}
			else i++;
		}
		else {
			num = -1;
			break;
		}
	}
	if (cur_en < 335) num = -1;
	cout << num + 1 << endl;
	return 0;
}