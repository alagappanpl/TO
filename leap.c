#include <stdio.h>
#include<conio.h>
void main()
{
int year;
printf("\n Please Enter any year you wish \n ");
scanf(" %d ", &year);
 if (( year%400 == 0)|| (( year%4 == 0 ) &&( year%100 != 0)))
 printf("\n %d is a Leap Year. \n", year);
 else
 printf("\n %d is not the Leap Year. \n", year);
}
