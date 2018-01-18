include<iostream.h>
#include<conio.h>
main()
{
int x,n,y,i;
cout<<"enter the intervals";
cin>>x>>y;
for(i=x;i<=y;i++)
{
if(i%2==0)
cout<<"\t"<<i;
}
}
