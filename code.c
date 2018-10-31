#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	while(1)
	{
		for(j=0;j<5;j++)
		{
			i=rand()%100;
			printf("%d\t",i);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
