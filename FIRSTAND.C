#include<stdio.h>
#include<conio.h>
void main()
{
long first=0,num=0,last=0,sum = 0;
clrscr();
	printf("Enter The Number ");
	scanf("%d",&num);
	printf("\n");

	last =num;
	while(num>=10)
	{
		num=num/10;
	}
	first = num;
       //		printf("The First Digit Is %d \n",first);

	last = last%10;
      //		printf("The Last Digit Is %d \n",last);

	sum = first + last;
	printf("The Sum is %ld",sum);
getch();
}