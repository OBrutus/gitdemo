#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	do
	{
		for(j=0;j<5;j++)
		{
			i=rand()%100;
			printf("%d\t",i);
		}
		printf("\n");
	}while(1);
	printf("\n");
	return 0;
}
