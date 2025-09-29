#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string result ="";
    cin>>n;
    stack<int> st;
    vector<int> v;

    for(int i=0; i<n; ++i){
        int x;
        cin>>x;
        v.push_back(x);
    }

    st.push(0);
    int s=1;
   for(int i=0; i<n; i++){
        while(s<=v[i]){
            st.push(s);
            s++;
            result+="+\n";
        }
        if(st.top()==v[i] && !st.empty()){
            st.pop();
            result+="-\n";
        }
        else{
            cout<<"NO\n";
            return 0;
        }
   }
   cout<<result;

    return 0;
}
