#include<conio.h>
#include<stdio.h>
void main()
{
FILE *fp;
char str1[20],str2[20];
int i,c=0,w=0;
fp=fopen("PRAC","w");
printf("Enter the Strin");
gets(str1);
fputs(str1,fp);
fclose(fp);
fp=fopen("PRAC","r");
fgets(str2,20,fp);
for(i=0;str2[i]!=0;i++)
{
if(str2[i]==' ')
{
w++;
}
c++;
}
printf("The number of word is=%d",w);
printf("The number of character is=%d",c);

getch();

}