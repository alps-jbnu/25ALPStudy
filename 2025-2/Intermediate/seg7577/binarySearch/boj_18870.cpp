#include <iostream>
#include <algorithm>

using namespace std;

int binary_search(vector<int>& sorted, int target){
    int low = 0, high = sorted.size() - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        
        if (sorted[mid] == target)
            return mid;
        
        if (sorted[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
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
    
    vector<int> sorted = vec;
    sort(sorted.begin(), sorted.end());
    sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
    
    for (auto temp : vec)
        cout << binary_search(sorted, temp) << " ";
}
