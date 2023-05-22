#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int v[10];
	int i, j, aux;
	
	printf("Valores para serem ordenados: \n");
	for(i=0; i<10; i++){
		v[i] = rand() % 1000;
		printf("%d ", v[i]);
	}
   for (j=1; j<10; j++){
   	   for (i = 1; i < 10-1; i++)
   	   {
			if (v[i] > v[i + 1])
			{
        		aux = v[i];
        		v[i] = v[i + 1];
    			v[i + 1] = aux;
    		}
		}
   }
	printf("\n");
	printf("\nOs valores organizados sao: \n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", v[i]);
	}
	printf("\n \n \n");
	return 0;
}