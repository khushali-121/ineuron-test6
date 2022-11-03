//count digit in given number
#include<stdio.h>
int main()
{
    long int num, count=0;
    printf("enter a  number=");
    scanf("%ld",&num);
    do
    {
        num=num/10;
        ++count;
    }while(!(num==0));
    printf("%d",count);
    return 0;
}