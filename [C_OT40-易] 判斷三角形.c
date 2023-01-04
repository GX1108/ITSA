#include <stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d\n%d\n%d",&a,&b,&c)!=EOF)
    {
        if((a+b)>c&&(b+c)>a&&(a+c)>b)
            printf("Bigger than the third side\n");
        else
            printf("Less than the third side\n");

    }
}
