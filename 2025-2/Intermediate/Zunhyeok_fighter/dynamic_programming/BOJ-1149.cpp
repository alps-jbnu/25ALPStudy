#include <bits/stdc++.h>
using namespace std;

int cost[1001][4];
int d[1001][4];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> cost[i][1]; //»¡°­
		cin >> cost[i][2]; //ÃÊ·Ï
		cin >> cost[i][3]; //ÆÄ¶û
	}
	d[1][1] = cost[1][1];
	d[1][2] = cost[1][2];
	d[1][3] = cost[1][3];
	for (int i = 2; i <= n; i++) {
		d[i][1] = min(d[i - 1][2], d[i - 1][3]) + cost[i][1];
		d[i][2] = min(d[i - 1][1], d[i - 1][3]) + cost[i][2];
		d[i][3] = min(d[i - 1][1], d[i - 1][2]) + cost[i][3];
	}
	cout << min({ d[n][1], d[n][2], d[n][3] });
	return 0;
}