#include<stdio.h>

int main()
{
    int km;
    while(scanf("%d",&km)!=EOF)
    {
        float mile;
        mile=km*1.6;
        printf("%.1f",round(mile));
    }


}

