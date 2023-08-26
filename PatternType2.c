#include<stdio.h>
#include<conio.h>


void Pattern(int N)
{
int k=97,m=65,i,j;
for(i=1;i<=N;i++)
{
for(j=1;j<=N;j++)
{
if(i%2==0)
{
printf("%c",m);
}
else
{
printf("%c",k);
}

}
printf("\n");
k++;
m++;

}


}
