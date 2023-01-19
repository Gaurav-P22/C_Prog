//Wap to find a Maximum Number in array
#include<stdio.h>
#include<conio.h>
void main()
{

int ar[10],i,temp;
clrscr();
printf("Enter the Array ");
for(i=0;i<10;i++)
{
scanf("%d",&ar[i]);
}
temp=ar[0];
for(i=0;i<10;i++)
{
if(temp<ar[i])
{
temp=ar[i];

}
}
printf("\n%d",temp);
getch();
}