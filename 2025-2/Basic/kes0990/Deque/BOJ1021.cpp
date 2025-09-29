#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin>>N>>M;

    deque<int> D;
    for(int i=1; i<=N; i++){
        D.push_back(i);
    }
    int cnt=0;

    for(int i=0; i<M; i++){
        int t;
        cin>>t;
        auto it = find(D.begin(),D.end(),t);
        int left = distance(D.begin(), it);
        int right = D.size()-distance(D.begin(), it);
        if(left<right){
            for(int k=0; k<left; k++){
                int v = D.front();
                D.pop_front();
                D.push_back(v);
                cnt++;
            }
        }
        else if(left>=right){
            for(int k=0; k<right; k++){
                int v = D.back();
                D.pop_back();
                D.push_front(v);
                cnt++;            
            }
        }
        D.pop_front();
    }
    cout<<cnt<<"\n";
    return 0;
}
