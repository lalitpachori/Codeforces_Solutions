#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[1000];
	sacnf("%d",str);
	len=strlen(str);
	printf("%c",str[0]);
	for (int i = 1; i < len; i++)
	{
		printf("%s",str[i]);
		
	}
	return 0;
}