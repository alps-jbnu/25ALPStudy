#include <iostream>
using namespace std;

int main(void){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int nums[5];
    int sum=0;
    for(int i=0; i<5; i++){
        cin>>nums[i];
        sum+=nums[i];
    }
    int avg = sum/5;

    for(int i=0; i<4; i++){
        for(int j=i+1; j<5; j++){
            if(nums[i]<=nums[j]){
                int temp = nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
            }
        }
    }
    cout<<avg<<"\n"<<nums[2]<<"\n";
    
}
