//Write a program to add two Number

#include<stdio.h>
#include<conio.h>
void main()
{
void Sum(int *,int *);
int a,b;
printf("Enter the Two value to add them");
scanf("%d%d",&a,&b);
Sum(&a,&b);
getch();

}
void Sum(int *ptr1,int *ptr2)//Creating and Initializing the pointer
{
int c;
c=*ptr1+(*ptr2);
printf("The Sum of the two Numbers => %d",c);
}
