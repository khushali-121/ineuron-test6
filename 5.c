// print sum of cubes of N number
#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    printf("Enter a number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
   {
    j=i*i*i;
       sum=sum+j;
    }
    printf("sum is %d",sum);
    return 0;
}