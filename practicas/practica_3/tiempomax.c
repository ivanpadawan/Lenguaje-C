#if0
   Muestra los valores de fecha que podría llegar a 
   alcanzar nuestro reloj
#endif

#include <stdio.h>
#include <time.h>
#include <math.h>

int main ()
{
   time_t nexttime;

   time(&nexttime);

   unsigned int maxtime;
   maxtime =(int)* ctime(&nexttime);
   
   printf("Current time = %s",ctime(&nexttime));
   
   
   
   
   time_t t = 1;
   for(int i = 0; i < 56; i++){
   		printf("%s\n",ctime(&t));
   		t = t * 2;
   			
   	}
}