#include <iostream>
#include <vector>

using namespace std;

void fast_io() { ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }


int main()
{
    vector<int> arr(3);
    vector<int> count(10, 0);
    for(auto& i : arr) cin >> i;

    int sum = arr[0] * arr[1] * arr[2];
    string s_sum = to_string(sum);
    for(int i = 0; i < s_sum.size(); i++) {
        count[s_sum[i] - '0']++;
    }

    for(auto& i : count) cout << i << '\n';
    
    return 0;
}

