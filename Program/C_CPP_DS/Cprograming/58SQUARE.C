#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a;
	clrscr();
	printf("Enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 a = i*i;
		printf("\t%d",a);
	}

	getch();
}