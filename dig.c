#include<stdio.h>
int main()
{
	 int no,rem,sum=1;
	 scanf("%d",&no);
	 while(no!=0)
	 {
	 	rem=no%10;
	 	sum=sum*rem;
	 	no=no/10;
	 }
	 printf("%d",sum);
	 return 0;
}
