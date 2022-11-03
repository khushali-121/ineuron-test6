//check given number is prime or not
#include<stdio.h>
int main()
{
    int n,i,t=0;
    printf("Enter a number=\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
    t++;
    }
    if(t==2)      
  /*since prime number is divisible by only 1 or itself that's why condition inside execute two time if given number will be prime if number is not prime so its divisible many time than value of t more than 2*/
 printf("number is prime");
 else
 printf(" number is not prime");
 return 0;
}