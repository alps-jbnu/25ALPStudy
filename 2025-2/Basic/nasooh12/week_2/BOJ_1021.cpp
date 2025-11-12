//미완성.

#include <iostream>
#include <deque>
using namespace std;

int main(void){
    int N; // 큐의 크기
    int M; // 뽑아내야 하는 원소 개수
    deque<int> deq; //큐의 원소의 초기 위치 정보를 가지는 덱 a1 .. aN

    cin >> N >> M;
    
    //a1 ~ aN 초기화
    for(int i=1;i<N+1;i++){
        deq.push_back(i);
    }

    for(int i =0 ; i<M ; i++){
        int target;
        cin >> target;
        //만약 front 보다 target이 
    }

    return 0;
}
// 1 2 3 4 5 6 7 8 9 10
// 2 3 4 5 6 7 8 9 10 1 //2
// 3 4 5 6 7 8 9 10 1   //1 -2
// 1 3 4 5 6 7 8 9 10   //3
// 10 1 3 4 5 6 7 8 9   //3
// 9 10 1 3 4 5 6 7 8   //3
// 10 1 3 4 5 6 7 8     //1 -9
// 