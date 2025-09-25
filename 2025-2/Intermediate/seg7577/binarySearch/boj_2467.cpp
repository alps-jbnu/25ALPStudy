/* 
* 같은 양의 두 용액을 혼합한 용액의 특성값은 혼합에 사용된 각 용액의 특성값의 합으로 정의한다. 
* 이 연구소에서는 같은 양의 두 용액을 혼합하여 특성값이 0에 가장 가까운 용액을 만들려고 한다. 
* 두 종류의 알칼리성 용액만으로나 혹은 두 종류의 산성 용액만으로 특성값이 0에 가장 가까운 혼합 용액을 만드는 경우도 존재할 수 있다.
*/

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

pair<int, int> binarySearch(vector<int>& vec, int n){
    int temp = INT_MAX;
    pair<int, int> answer = {0, 0};
    
    for (int i = 0; i < n; i++){
        int pivot = vec[i];
        int low = i + 1, high = vec.size() - 1;
        
        //cout << "-----------\n";
        while(low <= high){
            int mid = (low + high) / 2;
            long long sum = vec[mid] + pivot;

            if (abs(sum) < abs(temp)){
                temp = sum;
                answer = {pivot, vec[mid]};
            }

            //cout << "sum: " << sum << "\ttemp: " << temp << '\n';
            if (sum < 0)    {   low = mid + 1;  }
            else            {   high = mid - 1; }
        }
    }
    return answer;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //용액의 수, 특성값(음수: 알칼리, 양수 : 산성)
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    
    pair<int, int> answer = binarySearch(vec, n);
    cout << answer.first << " " << answer.second << '\n';
}