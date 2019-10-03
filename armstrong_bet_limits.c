#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,digit,copy,sum,a,b;
	printf("Enter a and b to find the armstrong number between them\n");
	scanf("%d%d",&a,&b);
for(i=a+1;i<b;i++)
{
	copy=i;
	sum=0;
	while(copy!=0)
	{
		digit=copy%10;
		sum=sum+(pow(digit,3));
		copy=copy/10;
		
	}
	
	if(sum==i)
	{
		printf("%d\n",i);
		
	}
	
}
	
getch();
}
/*This program prints the armstrong numbers within the given limits*/
