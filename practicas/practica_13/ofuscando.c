#include <stdio.h>
#if0
	Definiendo las instrucciones podemos hacer que el codigo 
	se vea de otra forma ;)
#endif
#define BEGIN main
#define INTEGER int
#define IF if
#define ELSE else
#define ENDIF return
#define ESCRIBE printf


int BEGIN()
{
	INTEGER x = 10;
	IF (x >= 10)
	
		ESCRIBE("TENGO DIEZ\n");
	ELSE
		ESCRIBE("REPROBARE\n");
	ENDIF 0;
}