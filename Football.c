#include <stdio.h>
#include <string.h>

int main()
{

	char str[100];
	int len;
	int count1=0,count2=0;
	scanf("%s",str);
	len=strlen(str);
	if(strstr(str,"1111111")||strstr(str,"0000000"))
	{
	        printf("YES");
	}
	else
	{
	        printf("NO");
	}
	
	
	return 0;
}