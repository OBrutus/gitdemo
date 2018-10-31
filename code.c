#include<stdio.h>
#include<math.h>
#include <sys/ioctl.h>

int main (void,void)
{
    struct ttysize ts;
    ioctl(0, TIOCGSIZE, &ts);

    printf ("lines %d\n", ts.ts_lines);
    printf ("columns %d\n", ts.ts_cols);
	scanf("%d",&j);
	int i,j;
	while(1)
	{
		for(j=0;j<ts.ts_cols;j++)
		{
			i=rand()%100;
			printf("%d\t",i);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
