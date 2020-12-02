#include <stdio.h>
#include <stdlib.h>

int main()
{int con, NumMayor=0, NumMenor=0, Num[2];
for (con=0; con<2; con++)
{printf("Ingrese un numero: ");
scanf("%d",&Num[con]);};

for (con=0; con<2; con++)
{if (NumMayor<Num[con])
    NumMayor=Num[con];}

    NumMenor=NumMayor;

for (con=0; con<2; con++)
{if (NumMenor>Num[con])
     NumMenor=Num[con];}

int i=NumMenor;
printf("los numeros intermedios son:\n");
while (NumMayor>=i)
{printf("%d\n",i);
 i=i+1;}

return 0;
}
