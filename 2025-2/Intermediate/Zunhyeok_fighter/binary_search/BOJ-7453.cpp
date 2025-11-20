#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[4][4001];
ll sum1[16000000], sum2[16000000];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr[j][i];
		}
	}
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sum1[k] = arr[0][i] + arr[1][j];
			sum2[k] = arr[2][i] + arr[3][j];
			k++;
		}
	}
	sort(sum2, sum2 + k);
	ll cnt = 0; //최대 나올수있는게... 4000^4였음.
	for (int i = 0; i < k; i++) {
		int st = 0, en = k - 1;
		while (st <= en) {
			int mid = (st + en) / 2;
			if (sum2[mid] + sum1[i] == 0) {
				cnt += upper_bound(sum2, sum2 + k, sum2[mid]) - lower_bound(sum2, sum2 + k, sum2[mid]);
					if (sum2[mid] + sum1[i] <= 0) {
						st = upper_bound(sum2, sum2 + k, sum2[mid]) - sum2; //upper랑 lower가 배열 위치(주소) 반환해서 인트로 변환하기 위해 sum2의 첫번째 주소를 빼야됨
					}
					else
						en = lower_bound(sum2, sum2 + k, sum2[mid]) - sum2;
			}
			else if (sum2[mid] + sum1[i] <= 0) {
				st = mid + 1;
			}
			else
				en = mid - 1;
		}
	}
	cout << cnt;
	return 0;
}