#include <iostream>
#include <math.h>
using namespace std;
#define endl '\n'

int arr[10];

int main() {
	int n, k, min = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int cur_c = n - 1;
	while (k > 0) {
		if (k >= arr[cur_c]) {
			k = k - arr[cur_c];
			min++;
		}
		else if (k < arr[cur_c]) {
			cur_c--;
		}
	}
	cout << min;
	return 0;
}