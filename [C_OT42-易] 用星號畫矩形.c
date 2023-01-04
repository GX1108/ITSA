#include <stdio.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a>0&&b>0)
        {
            for(int i=0; i<b; i++)
            {
                for(int j=0; j<a; j++)
                {
                    printf("*");
                }
                printf("\n");

            }
        }
        else
            printf("no answer\n");
    }
}
