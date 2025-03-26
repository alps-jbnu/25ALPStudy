#include <iostream>
#include <algorithm>
using namespace std;
int a[100000];

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int x, count = 0;
	cin >> x;

	int left = 0, right = n-1;
	while (left < right) {
		int sum = a[left] + a[right];

		if (sum == x) {
			count++;
			left++;
			right--;
		}
		else if (sum < x) {
			left++;
		}
		else {
			right--;
		}
	}
	cout << count;
	return 0;
}
