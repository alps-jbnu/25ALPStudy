#include <iostream>
using namespace std;

int main(void){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int min=0;
    int sum=0;
    int cnt=0;

    for (int i=0; i<7; i++){
        int n;
        cin>>n;
        if(n%2==1){
            if(cnt==0){
                min=n;
            }
            else if(n<=min){
                min=n;
            }
            sum+=n;
            cnt++;
        }
    }
    if (cnt==0){
        cout<<-1<<"\n";
    }
    else {
        cout<<sum<<"\n";
        cout<<min<<"\n";
    }
    return 0;
}
