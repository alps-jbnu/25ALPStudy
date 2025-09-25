#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
    int n, max, cnt = 0;
    cin >> n >> max;

    vector<int> girls(6, 0);
    vector<int> boys(6, 0);

    for (int i = 0; i < n; i++) {
        int gender, grade;
        cin >> gender >> grade;

        if (gender == 0) {
            girls[grade - 1]++;
        } else {
            boys[grade - 1]++;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        cnt += (girls[i] + (max - 1)) / max;
        cnt += (boys[i] + (max - 1)) / max;
    }

    cout << cnt;
	
	return 0;
}