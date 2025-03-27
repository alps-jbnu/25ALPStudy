#include <bits/stdc++.h>
using namespace std;

int coord_original[1000001];
int coord[1000001];
int comp[1000001];

int make_comp_coord(int *arr,int N) {
	int cnt = 0;
	comp[cnt++] = arr[0];
	for (int i = 1; i < N; i++) {
		if (arr[i] != arr[i - 1]) {
			comp[cnt++] = arr[i];
		}
	}
	return cnt;
}

int coord_comp(int target, int st ,int en) {
	int cnt = 0;
	while (st <= en) {
		int mid = (st + en) / 2;
		if (comp[mid] == target) {
			return mid;
		}
		else if (comp[mid] < target) {
			st = mid + 1;
		}
		else {
			en = mid - 1;
		}
	}
}
int main() {
	int N, n;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> coord_original[i];
		coord[i] = coord_original[i];
	}
	sort(coord, coord + N);
	n = make_comp_coord(coord, N);
	for (int i = 0; i < N; i++) {
		cout << coord_comp(coord_original[i], 0, n) << " ";
	}
}