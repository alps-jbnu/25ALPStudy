#include <stdio.h>

int main() {

    int T, N, i, ii, one[42], zero[42];

    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%d", &N);
        one[0] = zero[1] = 0;  // 0�� 1�� 0��¼�, 1��¼��� ������. 
        one[1] = zero[0] = 1;
        if (N == 0)
            printf("1 0\n");
        else if (N == 1)
            printf("0 1\n");  //�Է¹��� N�� 0�϶��� 1�϶� ��°� 
        else {
            for (ii = 2; ii <= N; ii++) {  //�� �� ��Ȳ���� ������ ������ 0�� 1�� 0,1 ��¼��� �̿��� 
                one[ii] = one[ii - 1] + one[ii - 2];   //N�� 0�� 1 ��¼��� ����, ����� �Ǻ���ġ ������ ��������� 
                zero[ii] = zero[ii - 1] + zero[ii - 2];      // 0�� 1 ��¼� ���� �Ǻ���ġ ������ ����. 
            }
            printf("%d %d\n", zero[N], one[N]);
        }
    }
    return 0;
}