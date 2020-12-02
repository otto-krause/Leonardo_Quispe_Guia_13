#include <stdio.h>
#include <stdlib.h>

int main()
{
int con, A[15], X=1;
for (con=0;con<15;con++)
{printf("\nIngrese la nota del alumno numero %d: ",X);
scanf("%d",&A[con]);
if(A[con]>8)
    {printf("el alumno %d tiene nota mayor a ocho\n",X);}
X++;}
return 0;
}
