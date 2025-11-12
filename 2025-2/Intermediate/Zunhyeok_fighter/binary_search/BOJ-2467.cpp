#include <bits/stdc++.h>
using namespace std;

int arr[100001];

int binary_search(int st, int en, int sol) {
	int c_num = st != sol ? arr[st] : arr[st + 1]; // c_num은 현재까지의 최적값, st == sol == 0이면 오류남. 
	//그래서 삼항연산자로 st == sol일때는 arr[st+1]로 초기화
	while (st <= en) {
		int mid = (st + en) / 2;
		if (mid == sol) {  //mid가 sol이면 넘어감 mid == sol 일때 c_num에 들어가면 큰일남.
			if (arr[mid] + arr[sol] < 0) {
				st = mid + 1;
			}
			else {
				en = mid - 1;
			}
			continue;
		}
		if (abs(c_num + arr[sol]) > abs(arr[mid] + arr[sol])) { //c_num과 mid를 비교해서 더 작은값을 c_num에 저장
			c_num = arr[mid];
		}
		if (arr[mid] + arr[sol] < 0) {
			st = mid + 1;
		}
		else if (arr[mid] + arr[sol] > 0) {
			en = mid - 1;
		}
		else { // arr[mid] + arr[sol] == 0이면 이게 최적값임.
			return arr[mid];
		}
	}
	return c_num;
}

int main() {
	int n, min_sum = INT_MAX;
	int x, y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		int a = binary_search(0, n - 1, i);
		if (abs(arr[i] + a) < min_sum) { // 최적값 갱신
			min_sum = abs(arr[i] + a);
			x = arr[i];
			y = a;
		}
	}
	cout << x << " " << y;
	return 0;
}