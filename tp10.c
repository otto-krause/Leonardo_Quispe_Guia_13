#include <stdio.h>
#include <stdlib.h>


int main()
{
	int N[10], con=0, S=0, P=1, NB=0;
	float Pro=0;
	printf("ingrese 10 numeros ");
	for(con=0;con<10;con++){
		scanf("%d",&N[con]);
		S=S+N[con];
		P=P*N[con];
	}
	Pro=S/10;

	for(con=0;con<10;con++){
	if(N[con]<Pro){
		NB=NB+1;
	}
     }
     printf("\n la suma de los numeros ingresados es %d ",S);
      printf("\n el producto de los numeros ingresados es %d ",P);
       printf("\n el promedio de todos los numeros es %f y la cantidad de elementos que estan por debajo del son %d ",Pro,NB);
     return 0;
}
