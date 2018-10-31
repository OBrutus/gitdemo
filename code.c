#include<stdio.h>
#include<math.h>
#include <sys/ioctl.h>

int main (void)
{
    struct winsize w;
	int j;
	char c;
    ioctl(0, TIOCGWINSZ, &w);

    printf ("lines %d\n", w.ws_row);
    printf ("columns %d\n", w.ws_col);
	scanf("%d",&j);
	while(1)
	{
		for(j=0;j<w.ws_col;j++)
		{
			c=(char)rand()%255;
			printf("%d\t",c);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
