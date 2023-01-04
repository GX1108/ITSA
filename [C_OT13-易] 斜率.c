#include <stdio.h>

int main()
{
    int x1,y1,x2,y2;
    while(scanf("%d %d\n%d %d",&x1,&y1,&x2,&y2)!=EOF)
    {
    int m=(y1-y2)/(x1-x2);
        printf("%d\n",m);
    }

}
