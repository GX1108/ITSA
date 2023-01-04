#include<stdio.h>
#include<math.h>

int main()
{
    int x,y;
    double dis;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        if(x<=100&&x>=0&&y<=100&&y>=0)
            printf("inside\n");
        else
            printf("outside\n");

    }

}
