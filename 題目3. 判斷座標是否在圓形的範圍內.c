#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    double dis;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        if(x<0)
            x=x*-1;
        if(y<0)
            y=y*-1;
        dis=x*x+y*y;
        if (dis>40000)
            printf("outside\n");
        else
            printf("inside\n");
    }

}
