
#include<stdio.h>
main()
{
	int year; 
	printf("/Enter Year : ");
	scanf("%d",&year);
	
	if((year%4 == 0 && year%100 !=0) || year%400 == 0)
	{
		printf("/n Leap year!!");
	}
	else
	{
		printf("/n Not A Leap Year!!");
	}
}