#include <iostream>

using namespace std;

int arr[1000];
int dp[1001];

int main() {
	int result = 0, n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				if (dp[i] < dp[j] + 1)
					dp[i] = dp[j] + 1;
			}
		}
		if (dp[i] > result)
			result = dp[i];
	}
	cout << result;
	return 0;
}