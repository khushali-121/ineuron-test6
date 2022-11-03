//calculate the lCM of given two numbers
#include<stdio.h>
int main()
{
    int n1,n2,lcm,g;
    printf("Enter two number=");
    scanf("%d%d",&n1,&n2);
    for(g=n1<n2?n1:n2;g>=1;g--)
    if(n1%g==0&&n2%g==0)   
    break;    
    printf("gcd of given no=%d",g);
    lcm=n1*n2/g;                                /* lcm X hcf=a X blcm=a X b/hcf      */
    printf("\nlcm of %d and %d=%d",n1,n2,lcm);
    return 0;
}