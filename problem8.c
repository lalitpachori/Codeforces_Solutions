#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int len;
	int value;
	char str1[100],str2[100];
	scanf("%s",str1);
	scanf("%s",str2);
	len=strlen(str1);
	for (int i = 0; i < len; i++)
	{
		if(tolower(str1[i])==tolower(str2[i]))
		{
			value=0;
			continue;
		}
		else if (tolower(str1[i])>tolower(str2[i]))
		{
			value=1;
			break;
		}
		else
		{
			value=-1;
			break;
		}
	}
	printf("%d\n",value);
	
	return 0;
}