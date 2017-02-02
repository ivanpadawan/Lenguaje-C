#include <stdio.h>

int main()
{
	int x;
	printf("%s\n","Ingresa un número: " );
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		if(i%2 !=0)
			printf("%d\n", i);
	}		
}