// BOJ : 18869 멀티버스 2 **/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int m, n, cnt, arr[104][10004];

//1. 숫자 -> idx로 변환
void compress(int a[]) {
	vector<int> v(a, a + n); //a를 v로 복사, 고유값만있어도 됨
	sort(v.begin(), v.end());
	//1. unique는 정렬후 사용해아함
	//2. unique는 중복원소(쓰레기)는 뒤로보냄, 쓰레기값의 첫주소반환
	//3. erase(쓰레기첫주소, 쓰레기막주소)로 쓰레기 제거
	v.erase(unique(v.begin(), v.end()), v.end());
	
	//숫자를 idx로 바꾸기
	//ex ) a: 10 10 20 20 30
	// v: 10 20 30
	//a` : 0 0 1 1 2
	for (int i = 0; i < n; ++i) {
		a[i] = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
	}

}

int compare(int a[], int b[]) {
	for (int i = 0; i < n; ++i) {
		if (a[i] != b[i]) return 0;
	}
    return 1;
}
int main() {
	cin.tie(0);

	cin >> m >> n;

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> arr[i][j];
		}
		compress(arr[i]);
	}

	for (int i = 0; i < m-1; ++i) {
		for (int j = i + 1; j < m; ++j) {
			if(compare(arr[i], arr[j])) cnt++;
		}
	}
	cout << cnt;

	return 0;
}
