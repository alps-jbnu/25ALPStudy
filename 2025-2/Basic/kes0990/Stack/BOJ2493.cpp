#include <iostream>
#include <stack>
#include <utility>
#include <vector>
using namespace std;

int main(void){
    int N;
    cin>>N;
    stack< pair<int, int> > tower;
    vector<int>result(N);
    for(int i=0; i<N; ++i){
        int h;
        cin>>h;
        while(!tower.empty()&&tower.top().first < h){
            tower.pop();
        }
        if(tower.empty()){
            result[i]=0;
        }
        else{
            result[i]=tower.top().second;
        }
        tower.push(make_pair(h, i+1));
    }

    for(int i=0; i<N; ++i){
        cout<<result[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
