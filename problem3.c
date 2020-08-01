#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	char str[100][100];
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s[^\n]",str[i]);
	}
	
	return 0;
}