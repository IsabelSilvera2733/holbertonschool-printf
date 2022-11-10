#include <stdio.h>

int _printf(char *str, char a)
{

	int g = 0;
	for(g = 0; str[g]; g++) 
	{
		if( str[g] == '%') 
		{
			putchar(a);
			g = g + 2;
		}
		putchar(str[g]);
	}
}
