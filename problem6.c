#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char array[50];
	sacnf("%s",array);
	for (int i = 0; i < strlen(array); i++)
	{
		switch(array[i])
		{
			case 'a':break;
			case 'A':break;
			case 'e':break;
			case 'E':break;
			case 'i':break;
			case 'I':break;
			case 'o':break;
			case 'O':break;
			case 'u':break;
			case 'U':break;
			case 'y':break;
			case 'Y':break;
			default:printf(".%c\n",tolower(array[i]));
		}
	}

	return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
// 	char array[50];
// 	sacnf("%s",array);
// for (int i = 0; i < strlen(array); i++)
// {
//         if(array[i]=='i'||array[i]=='I'||array[i]=='e'||array[i]=='E'||array[i]=='o'||array[i]=='O'||array[i]=='u'||array[i]=='U'||array[i]=='y'||array[i]=='Y'||array[i]=='a'||array[i]=='A')
//         {
// 	                continue;
// 	    }
// 	   else
// 	   {
// 	      printf(".%c",tolower(array[i]));
// 	   }
// }
// 	return 0;
// }


