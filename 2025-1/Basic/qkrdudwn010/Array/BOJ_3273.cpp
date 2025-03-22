#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    cin >> x;
    int l_point = 0, r_point = n - 1, count = 0;
    while(l_point < r_point){
        int temp = v[l_point] + v[r_point];
        if(temp == x){
            count++;
            l_point++;
            r_point--;
        }
        else if(temp > x){
            r_point--;
        }
        else if(temp < x){
            l_point++;
        }
    }
    cout << count;
    return 0;
}
