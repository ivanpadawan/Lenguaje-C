#include <stdio.h>

int main()
{
	int x;
	printf("%s\n","Ingresa un numero: " );
	scanf("%d", &x);
	for(int i = 0;i <= x; i++)
		printf("%d\n",i);
}