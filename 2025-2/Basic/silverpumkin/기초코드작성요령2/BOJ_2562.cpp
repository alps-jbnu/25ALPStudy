#include <stdio.h>
int main()
{
    int i;
    int max=0,ci=0;
    for(i=0;i<9;i++)
    {
        int n;
        scanf("%d",&n);
        if(n>=max)
        {
            max = n;
            ci = i;
        }
    }
    printf("%d\n%d",max,ci+1);

    return 0;
}