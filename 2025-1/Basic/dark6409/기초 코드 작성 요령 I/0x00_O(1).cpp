#include <iostream>
using namespace std;

int func1(long long n){
    long long cnt3 = n/3; // n까지 3배수 개수
    long long cnt5 = n/5;
    long long cnt15 = n/15;
    
    long long sum3 = 3 * cnt3 * (cnt3+1)/2; // 등차수열의 합 공식. n*(첫항+끝항)/2
    // cnt3(3+3*cnt3)/2 
    // 3*cnt3 * (1+cnt3)/2
    // 3 * cnt3 * (cnt3 + 1)/2
    
    long long sum5 = 5 * cnt5 * (cnt5+1)/2;
    long long sum15 = 15 * cnt15 * (cnt15+1)/2;
    
    return sum3 + sum5 - sum15; // 중복 카운트 제거용
}

int main()
{
    int N=27639;
    long long result = func1(N);
    
    cout<<"func1("<<N<<") = "<<result;
  
    return 0;
}
