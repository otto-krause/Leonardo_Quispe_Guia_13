#include <stdio.h>
#include <stdlib.h>

int main()
{
int con=0, Num[3]={0,1,1};

  while(con<1000)
{
  	Num[1]=Num[2]+Num[3];
  	printf("\n%d",Num[1]);
  	Num[3]=Num[2];
  	Num[2]=Num[1];
}
return 0;
}
