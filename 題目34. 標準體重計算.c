##include<stdio.h>

int main()
{
    int h,g;
    while(scanf("%d %d",&h,&g)!=EOF)
    {
        if(g==1)
            printf("%.1f\n",(h-80)*0.7);
        if(g==2)
            printf("%.1f\n",(h-70)*0.6);
    }
}
