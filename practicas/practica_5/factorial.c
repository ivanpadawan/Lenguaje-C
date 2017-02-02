#include <stdio.h>

#if 0
Declaramos la función que realiza el cálculo del factorial
#endif
int factorial(int num);

int main()
{
	int valor;
	int resultado;

	puts("Ingresa un número para hacer el cálculo factorial: ");
	scanf("%d", &valor);
	resultado = factorial(valor);
	printf("El factorial es %d \n",resultado);
	return 0;
}

#if 0
	Definimos las acciones de nuestra función
	la función se manda llamar de forma recursiva
#endif

int factorial(int num)
{
	
	return(num == 1?1:(num * factorial(num -1)));
}