#include <bits/stdc++.h>
using namespace std;

int tree[1000001];

long long get_wood_lenth(int h, int n) { //나무의 최대길이가 20억이라 sum이 인트 범위 벗어날수있음..
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		if ((tree[i] - h) > 0)
			sum += tree[i] - h;
	}
	return sum;
}

int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> tree[i];
	}
	sort(tree, tree + N);
	int st = 0, en = tree[N - 1];
	while (st <= en) {
		int mid = (st + en) / 2;
		if (get_wood_lenth(mid, N) < M)
			en = mid - 1;
		else
			st = mid + 1;
	}
	cout << en;
	return 0;
}