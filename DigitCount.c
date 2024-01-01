#include <stdio.h>
int DigC(int n)
{
    if(n==0)
    return 0;
    return 1+DigC(n/10);
}
void main(){
    int n=1534;
    printf(" %d ",DigC(n));
}
