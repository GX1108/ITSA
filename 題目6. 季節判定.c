#include <stdio.h>
int main()
{
    int month;
    while(scanf("%d",&month)!=EOF)
    {
        if(month>=3&&month<=5)
            printf("Spring\n");
        if(month>=6&&month<=8)
            printf("Summer\n");
        if(month>=9&&month<=11)
            printf("Autumn\n");
        if(month==12||month<=2)
            printf("Winter\n");
    }
}
