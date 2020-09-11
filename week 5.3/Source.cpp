#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int cat(char a[10000])
{
	int x = 0, c = 0;
	while (a[x] != '\0')
	{
		if (a[x] == 'C' || a[x] == 'c')
		{
			if (a[x + 1] == 'A' || a[x + 1] == 'a')
			{
				if (a[x + 2] == 'T' || a[x + 2] == 't')
				{
					c++;
				}

			}
		}
		x++;
	}
	return c;
}
int main()
{
	char arr[10000];
	scanf("%[^\n]", arr);
	printf("%d", cat(arr));
	return 0;
}