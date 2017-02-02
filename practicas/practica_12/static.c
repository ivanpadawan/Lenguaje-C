/*
*Las variables declaradas antes de la función principal
*se deben de alojar en el heap
*/
#include <stdio.h>
int x = 10;
char c[4];
int main()
{
		
	c[0]='h';
	c[1]='o';
	c[2]='l';
	c[3]='a';
	c[4]='\0';
	for(int i=0;i<10;i++)
	{
		if(c[i]=='\0')
			break;
		printf("%c\n",c[i]);
	}
}
