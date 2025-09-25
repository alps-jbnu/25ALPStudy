#include <iostream>
using namespace std;

int main(void){
    int A, B, C;
    cin>>A>>B>>C;
    int num[10]={0};
    int d = A*B*C;

    while(d>0){
        int t;
        //1의자리부터 각 자리의 수 저장
        t = d%10;
        //0~9의 빈도수 배열에 저장
        switch(t){
            case 0: num[0]++; break;
            case 1: num[1]++; break;
            case 2: num[2]++; break;
            case 3: num[3]++; break;
            case 4: num[4]++; break;
            case 5: num[5]++; break;
            case 6: num[6]++; break;
            case 7: num[7]++; break;
            case 8: num[8]++; break;
            case 9: num[9]++; break;
            default: break;
        }
        //다음 루프에 다음 자리수 확인하기 위해
        d/=10;
    }

    for(int i=0; i<10; i++){
        cout<<num[i]<<endl;
    }

    return 0;
}
