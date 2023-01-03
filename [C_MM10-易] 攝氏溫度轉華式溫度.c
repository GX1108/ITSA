#include<stdio.h>

int main()
{
    double a;
    while(scanf("%lf",&a)!=EOF)
    {
        printf("%.1f\n",1.8*a+32);
    }
    return 0;
}
