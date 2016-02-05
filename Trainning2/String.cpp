#include <stdio.h>

void main()
{
	char	a[] = "ABCDE";
	char	b[] = "XYZ";
	char	c[16];
	int i;
	int j;

	for (i = 0; i < 17; i++)
	{
		c[i] = a[i];
		if (a[i] == '\0')
			break;
	}

	for (j = 0; j < 17; j++)
	{
		c[i] = b[j];
		i++;
		if (b[j] == '\0')
			break;
	}

	printf("%s\n", c);
}