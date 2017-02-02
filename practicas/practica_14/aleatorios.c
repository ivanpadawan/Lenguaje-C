#if0
	Se puede leer desde los archivos del sistema para 
	que nos genere un número aleatorio

#endif


#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char fd;
	int buf;
	char *archivo="/dev/random";

	fd=open(archivo,O_RDWR);

	if(fd == -1)
		fprintf(stderr,"Error al abrir o crear el archivo" );
	printf("descriptor de archivo: %d\n", fd );

	if(read(fd,&buf,8) == -1)
		fprintf(stderr, "No se pudo leer archivo");
	printf("contenido de archivo: %d\n", fd );

	return 0;
}