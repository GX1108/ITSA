#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
         if (a>=60&&b>=60&&c>=60)
        {
            printf("P\n");
        }
        else if (a<60&&a+b+c>=220)
        {
            printf("P\n");
        }
        else if (b<60&&a+b+c>=220)
        {
            printf("P\n");
        }
        else if (c<60&&a+b+c>=220)
        {
            printf("P\n");
        }
        else if(a>=60&&b>=60&&a+b+c<220){
            printf("M\n");
        }
        else if(a>=60&&c>=60&&a+b+c<220){
            printf("M\n");

        }
        else if(c>=60&&b>=60&&a+b+c<220){
            printf("M\n");

        }
        else if(a<60&&b<60&&c>=80){
            printf("M\n");
        }
        else if(c<60&&b<60&&a>=80){
            printf("M\n");
        }
        else if(a<60&&c<60&&b>=80){
            printf("M\n");
        }
        else printf("F\n");
    }
}
