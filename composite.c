#include<stdio.h>
main()
{
int n,i,m=0;
printf("Enter a positive integer: ");
 scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
m=1;
break;
}
}
if(m==0)
printf("%d is a prime number.",n);
else
printf("%d is composite number.",n);
}
