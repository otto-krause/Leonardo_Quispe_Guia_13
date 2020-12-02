#include <stdio.h>
#include <stdlib.h>

int main()
{int con, VN, VM=0, VT=0, uv[20], V=1;
for (con=0; con<20; con++)
{printf("Ingrese el total de unidades vendidas en 15 dias hechas por el vendedor numero %d: ",V);
scanf("%d",&uv[con]);
if (uv[con]>VM)
{VM=uv[con];
VN=con+1;}
VT=uv[con]+VT;
V++;}

printf("\nEl total de unidades vendidas es: %d",VT);
printf("\nLa mayor venta es %d hecha por el vendedor numero %d",VM,VN);
}
