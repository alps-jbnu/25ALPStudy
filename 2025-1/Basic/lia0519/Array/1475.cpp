#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[10] = {};
	while (n > 0) {
		arr[n % 10]++;
		n /= 10;
	}

	arr[6] = (arr[6] + arr[9] + 1) / 2;
	arr[9] = arr[6];

	int max = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << max;
	return 0;
}
