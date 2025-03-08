#include<stdio.h>
int main()
{
    int inputnumber=0;
    puts("enter a number");
    scanf("%d",&inputnumber);
    printf("multiflication table of %d",inputnumber);
    for(int i=1;i<=10;i++)
    {
         printf("%d x %d =%d\n",inputnumber,i,inputnumber*i);
     }
     return 0;

}