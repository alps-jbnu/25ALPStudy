#include <stdio.h>
#include <string.h>

int main()
{
    char a[8]={'\0'};
    int a_c[10]={'\0'};
    int k,p,q;
    int max = 0;

    scanf("%s",&a);

    k = strlen(a);

    for(int j=0;j<k;j++)
    {
        p=a[j]-'0';
        a_c[p]++;
    }
    q = a_c[6]+a_c[9];
    if(q%2==1)

    {
        q++;
    }
    a_c[6] = q/2;
    a_c[9] = q/2;

    for(int i=0;i<10;i++)
    {
        if(max<=a_c[i])
        {
            max = a_c[i];
        }
    }

    printf("%d",max);

    return 0;
}