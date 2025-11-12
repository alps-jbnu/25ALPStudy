#include <stdio.h>

int main() {

    int T, N, i, ii, one[42], zero[42];

    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%d", &N);
        one[0] = zero[1] = 0;  // 0과 1의 0출력수, 1출력수를 정해줌. 
        one[1] = zero[0] = 1;
        if (N == 0)
            printf("1 0\n");
        else if (N == 1)
            printf("0 1\n");  //입력받은 N이 0일때와 1일때 출력값 
        else {
            for (ii = 2; ii <= N; ii++) {  //그 외 상황에서 위에서 저장한 0과 1의 0,1 출력수를 이용해 
                one[ii] = one[ii - 1] + one[ii - 2];   //N의 0과 1 출력수를 구함, 방식은 피보나치 수열의 방식이지만 
                zero[ii] = zero[ii - 1] + zero[ii - 2];      // 0과 1 출력수 따로 피보나치 수열을 써줌. 
            }
            printf("%d %d\n", zero[N], one[N]);
        }
    }
    return 0;
}