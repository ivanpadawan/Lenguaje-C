/*
*Calcula el valor del area
*de las figuras geométricas básica
*
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	int b;
	int op;
	float area;
	while(op != 0){
	printf("%s\n","Calcular área de:\n" );
	puts("\tTriangulo(1)");
	puts("\tRectangulo(2)");
	puts("\tCuadrado(3)");
	puts("\tSalir(0)");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
				puts("Ingresa la altura:");
				scanf("%d",&a);
				puts("Ingresa la base:");
				scanf("%d",&b);
				area = (b*a)/2;
				printf("El área del triángulo es: %f\n", area);
				break;
		case 2:
				puts("Ingresa la altura:");
				scanf("%d",&a);
				puts("Ingresa la base:");
				scanf("%d",&b);
				area = b*a;
				printf("El área del rectángulo es: %f\n", area);
				break;
		case 3:
				puts("Ingresa lado:");
				scanf("%d",&a);
				area = a*4;
				printf("El área del cuadrado es: %f\n", area);
				break;
		

	}
}
	printf("%s\n","Hasta luego! ;)\n");
}