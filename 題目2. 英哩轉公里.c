#include <stdio.h>  
#include <math.h>  
  
int main()  
{  
    int km;  
    while(scanf("%d",&km)!=EOF)  
    {  
        double mile;  
        mile=km*1.6;  
        printf("%.1f\n",mile);  
    }  
}
