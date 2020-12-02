#include <stdio.h>
#include <stdlib.h>

int main()
{int con, Pro, N[30];
    int Nota=1;
    for (con=0; con<30; con++)
{printf("Ingrese las notas del alumno %d: ",Nota);
scanf("%d",&N[con]);
Nota++;
Pro=Pro+N[con];}
Pro=Pro/30;
printf("\nEl promedio general del curso es: %d",Pro);
}
