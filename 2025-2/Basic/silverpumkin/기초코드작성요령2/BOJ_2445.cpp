#include <stdio.h>
int main()
{
    int n;
    int p;
    int ch=2;

    scanf("%d",&n);

    for(int i=1;i<=(2*n)-1;i++)
    {
        if(i>n)
        {
            p = i - ch;
            ch += 2;
        }
        else
        {
            p = i;
        }
        for(int q=1;q<=p;q++)
        {
            printf("*");
        }
        for(int j=(n-p)*2;j>0;j--)
        {
            printf(" ");
        }
        for(int q=1;q<=p;q++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}