#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int N;
    int arr[100000];
    int set=0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    
   sort(arr, arr+N);

    int l=0, r=N-1;
    while(l<r){
        if(arr[l]+arr[r]==x){
            set++;
            l++; r--;
        }
        else if (arr[l]+arr[r]>x){
            r--;
        }
        else if (arr[l]+arr[r]<x){
            l++;
        }
    }
    cout<<set<<"\n";
    return 0;
}
