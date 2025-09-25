#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
    int n, x, cnt = 0;
    cin >> n;
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
     
    cin >> x;
    
    sort(nums.begin(), nums.end());
    
    int start = 0, end = n - 1;
    while (start < end) {
        int sum = nums[start] + nums[end];

        if (sum == x) {
            cnt++;
            start++;
            end--;
        }
        else if (sum < x) {
            start++;
        }
        else {
            end--;
        }
    }
    
    cout << cnt;
	
	return 0;
}