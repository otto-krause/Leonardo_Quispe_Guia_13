#include <stdio.h>
#include <stdlib.h>

int main()
{int con, Smay=0, Smen=0, SP[20];
 for (con=0; con<20; con++)
{printf("Ingrese un sueldo ");
scanf("%d",&SP[con]);
    if(SP[con]>2000)
    {Smay=Smay+1;}
	else{Smen=Smen+1;}}

printf("\n%d personas tienen un sueldo mayor a 2000",Smay);
printf("\n%d personas tienen un sueldo menor a 2000",Smen);
return 0;
}
