#include <iostream>
#include <algorithm>
using namespace std;

int binary_search(int target, vector<int>& vec){
    int left = 0, right = vec.size() - 1;

    while(left <= right){
        int mid = (left + right) / 2;
        if (target == vec[mid])
            return 1;
        
        if (target < vec[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }

    return 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
    int m;
    cin >> m;

    sort(vec.begin(), vec.end());

    for (int i = 0; i < m; i++){
        int target;
        cin >> target;

        cout << binary_search(target, vec) << '\n';
    }
        
    

}