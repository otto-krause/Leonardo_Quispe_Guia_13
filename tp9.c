#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N[3]={0,0,0}, S;

    printf("ingrese 3 numeros: ");
    scanf("%d",&N[1]);
    scanf("%d",&N[2]);
    scanf("%d",&N[3]);
    S=N[1]+N[3];
    if((N[1]>N[2])&&(N[2]>N[3]))
	{printf("\nlos numeros se ingresaron de manera decendiente");}
	if((N[3]>N[2])&&(N[2]>N[1]))
    {printf("\nlos numeros se ingresaron de manera ascendente");}
    if(N[1]>=N[3]>=N[2])
    {printf("\nlos numeros se ingresaron de manera desordenada");}
    printf("\nla suma de los dos ultimos numeros es: %d",S);
return 0;
}
