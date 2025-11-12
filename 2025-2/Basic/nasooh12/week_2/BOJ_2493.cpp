#include <iostream>
#include <stack>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;  // 탑의 수
    cin >> N;
    stack<int> towerStack; // 탑의 높이 스택
    stack<int> undoStack; //임시 저장 스택
    int resultArr[N]; // 결과 출력용 배열 
    //int targetIdx = N-1; //stack1size

    /*stack1(towerStack) , stack2(undoStack)
    입력받은대로 push 하여 stack 1 에 저장 
    shot 변수에 stack1의 top을 저장해두고 stack1.pop
    - stack1의 top과 shot을 비교하여 shot보다 top이 크면 수신호 적중 -> 루프 탈출
    - shot보다 top이 작으면 적중하지 않으므로 top을 stack2에 push하고 stack1.pop
    첫 번째 케이스에 적중하거나 stack1이 empty가 될 때까지 반복하다가 도달하면 
    루프 중지 후 stack 2요소를 전부 stack1으로 pop&push : 이러면 원래 스택 복원 (undo)
    */

    //탑의 높이 스택 초기화 왼쪽부터 push
    for(int i = 0;i<N;i++){
        int tower;
        cin >> tower;
        towerStack.push(tower); 
    }
    int shot; // 발사 타워 높이 - 검사 받는 타워의 높이
    int shotIdx = N-1; // 발사 타워 위치
    

    while (!towerStack.empty())
    {
        //shot은 따로 보관하여 towerStack 규모 1 줄임 (undo x)
        shot = towerStack.top();
        towerStack.pop();
        // if(towerStack.empty()){
        //     resultArr[shotIdx--] = 0;
        // }
        //cout <<"undo size :"<< undoStack.size()<<"\n";
        while (true)
        {   
            if(!towerStack.empty()){
                // 가독성을 위해 변수 지정
                int target = towerStack.top();
                int targetPos = towerStack.size(); 
                //적중 시 기록 후 undo(루프 탈출)
                if(target >= shot){
                    resultArr[shotIdx--] = targetPos;
                    //만약 undo stack에 뭐가 있으면 undo 해준 후 루프 탈출
                    while (!undoStack.empty()){
                        towerStack.push(undoStack.top());
                        undoStack.pop();
                    }
                    //cout << "while 2 good end \ntarget : "<<target<<"\n tpos :"<< targetPos<< "\n";

                    break;
                }
                //비 적중시 타겟 재지정 (twstack 규모-1,undostack+1,루프)
                else{
                    undoStack.push(target);
                    towerStack.pop();
                }
                //cout << "while 2 next end \ntarget : "<<target<<"\n tpos :"<< targetPos<< "\n";
            }
            else{
                resultArr[shotIdx--] = 0;
                    //만약 undo stack에 뭐가 있으면 undo 해준 후 루프 탈출
                    while (!undoStack.empty()){
                        towerStack.push(undoStack.top());
                        undoStack.pop();
                    }
                    //cout << "while 2 good end \ntarget : "<<0<<"\n tpos :"<< 0<< "\n";
                break;
            }
        }
    }
    for(int i=0;i<N;i++){
        cout << resultArr[i] << ' ';
    }
    return 0;
}