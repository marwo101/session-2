#include <stdio.h>
#include <stdlib.h>
void variable(int x,int y,int z){
int *ptrx,*ptry,*ptrz;
z=0;
scanf("%i %i",&x,&y);
ptrx=&x;
ptry=&y;
ptrz=&z;
*ptrz=x;
*ptrx=y;
*ptry=z;
printf("%i %i",x,y);
}
int main()
{int x,y,z,*ptrx,*ptry,*ptrz;
variable(x,y,z);
    return 0;
}
