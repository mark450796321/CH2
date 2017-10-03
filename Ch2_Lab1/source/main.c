#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	printf("¢x");
	for (i = 1; i <= 9; i++)
		printf("%3d", i);
	putchar('\n');
	puts("---------------------");
	for (i = 1; i <= 9; i++)
	{
		printf("%d¢x", i);
		for (j = 1; j <= 9; j++)
			printf("%3d", i*j);
		putchar('\n');
	}
	system("pause");
	return 0;


}