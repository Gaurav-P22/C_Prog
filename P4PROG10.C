#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
printf("Enter the row number until u want to print the pattern\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf(“%d”,j);
}
}
getch();
}
