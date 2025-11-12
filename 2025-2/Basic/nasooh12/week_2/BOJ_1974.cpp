/*
basic 백준 1874 스택 수열
문제 푼 사람 : 이수형 / nasooh12

debugging result
-error 1
stack의 top, pop 접근 시 empty 예외처리 필수
zsh: segmentation fault  == > 잘못된 메모리 참조 에러
stack.top() 함수 사용 전 stack 의 empty 여부를 확인하지 않아 에러

-error 2
배열의 크기를 변수로 지정했는데 그 변수가 정의되기 전에 배열을 먼저 정의함.
goalArr[N] <- N의 값을 입력으로 받아야 하는데 받지 않은 상태에서 선언하여 에러
zsh: segmentation fault  == > 잘못된 메모리 참조 에러
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,num;
    int goalArrIdx = 0;
    
    string resultPrint; //결과 출력 문자열

    stack<int> stack;
    cin >> N;
    int goalArr[N]; //목표 수열을 담은 배열
    //goalArr 초기화 - 목표 설정
    for (int i = 0; i < N ; i++){
        cin >> num;
        goalArr[i] = num;
    }
    int oneToN =1;
    //push & pop - 가능 여부 검사
    for (int j = 1; j <= 2*N; j++){
        //goalArrIdx 의 원소가 i보다 클 때 : push
        //goalArrIdx 의 원소가 i와 같을 때 : push
        //goalArrIdx 의 원소가 i보다 작을 때 : pop 
        //pop -> 이때 검사, goal 원소가 맞는지 ? 아니면 no 출력 loop 탈출 / 맞으면 인덱스 +1 & loop 지속
        if (oneToN <= goalArr[goalArrIdx]){
            stack.push(oneToN);
            resultPrint.append("+\n");
            oneToN = oneToN+1;
        }
        else{
            if( !stack.empty() && stack.top() == goalArr[goalArrIdx]){
                resultPrint.append("-\n");
                stack.pop();
                goalArrIdx = goalArrIdx + 1;
            }
            else{
                resultPrint = "NO";
                break;
            }
        }
    }
    cout << resultPrint;

    return 0;
}
