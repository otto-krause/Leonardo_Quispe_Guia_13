#include <stdio.h>
#include <stdlib.h>

int main(){
int con, Num[5], NumM=0;
float NumPro=0;
for (con=0; con<5; con++)
{printf("Ingrese los numeros ");
scanf("%d",&Num[con]);

if (NumM<Num[con]){
NumM=Num[con];};}

for (con=0; con<5; con++)
{NumPro=NumPro+Num[con];}
NumPro=NumPro/5;
printf("\n El promedio es %f",NumPro);
printf("\n El numero mas grande es %d",NumM);
return 0;
}
