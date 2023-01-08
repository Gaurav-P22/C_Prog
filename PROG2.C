//WAP to take the numbers of five subject and find the Percent.
#include<stdio.h>
#include<conio.h>
void main()
{
void FindPer(int,int,int,int,int);
int s1,s2,s3,s4,s5;
printf("Enter The Numbers of five subject");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
FindPer(s1,s2,s3,s4,s5);
getch();
}
void FindPer(int s1,int s2,int s3,int s4,int s5)
{
int percent;
percent=(s1+s2+s3+s4+s5)/5;
printf("\nThe percent of the Number is=%d",percent);
}
