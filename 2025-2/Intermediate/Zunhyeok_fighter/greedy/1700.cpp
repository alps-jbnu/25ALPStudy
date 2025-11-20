#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define M 101

int e[M];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k, sum = 0;
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		int a;
		cin >> a;
		e[i] = a;
	}
	vector<int> mt;
	for (int i = 0; i < k; i++) {
		int plag;
		plag = 0;
		if (mt.size() < n) {
			for (int j = 0; j < mt.size(); j++) {
				if (mt[j] == e[i]) plag = 1;
			}
			if (plag)
				continue;
			else mt.push_back(e[i]);
		}
		else {
			for (int j = 0; j < mt.size(); j++) {
				if (mt[j] == e[i]) plag = 1;
			}
			if (plag)
				continue;
			else {
				int plag2;
				int dist, max_d_index, max_dist, m_i;
				dist = 0; max_dist = 0;
				for (int j = 0; j < mt.size(); j++) {
					plag2 = 0;
					for (int t = i + 1; t < k; t++) {
						if (e[t] == mt[j]) {
							plag2 = 1;
							dist = t;
							break;
						}
					}
					if (plag2 == 0) dist = INT_MAX;
					if (dist > max_dist) {
						max_dist = dist;
						m_i = j;
					}
				}
				mt[m_i] = e[i];
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}