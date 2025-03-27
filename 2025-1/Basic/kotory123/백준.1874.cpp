#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    vector<char> ans;
    vector<int> stack;
    int count = 0;
    
    for (int i = 1; i <= n; i++) {
        stack.push_back(i);
        ans.push_back('+');
        
        while (!stack.empty() && stack.back() == arr[count]) {
            stack.pop_back();
            ans.push_back('-');
            count++;
        }
    }
    
    if (!stack.empty()) {
        cout << "NO";
    } else {
        for (char c : ans) {
            cout << c << '\n';
        }
    }
    
    return 0;
}
