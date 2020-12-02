#include <stdio.h>
#include <stdlib.h>
int main(){
int con, RT=0, R[5]={1,2,3,4,5};
for (con=0; con<5; con++)
{printf("Ingrese el valor de cinco resistencias ");
scanf("%d",&R[con]);}
for (con=0; con<5; con++)
{printf("\nLas resistencias ingresadas son %d",R[con]);
RT=RT+R[con];}
printf("\n La resistencia total es %d",RT);
return 0;
}
