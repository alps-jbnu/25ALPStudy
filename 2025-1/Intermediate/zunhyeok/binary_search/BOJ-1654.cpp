#include <bits/stdc++.h>
using namespace std;
const long long MAX = INT_MAX;

int arr[10001];

long long get_num_of_lan(long long len, int K) {
	long long sum = 0;
	for (int i = 0; i < K; i++) {
		sum += arr[i] / len;
	}
	return sum;
}


int main() {
	int K, N;
	cin >> K >> N;
	for (int i = 0; i < K; i++) {
		cin >> arr[i];
	}
	long long st = 0, en = MAX + 1;
	while ( st <= en) {
		long long mid = (st + en) / 2 ;
		if ( get_num_of_lan(mid, K) >= N) {
			st = mid + 1;
		}
		else {
			en = mid - 1;
		}
	}
	cout << st - 1;
	return 0;
}