//Find the Area and the Circumference of the Circle
#include<stdio.h>
#include<conio.h>
void main()
{
float Area(float);
float Circum(float);
float r,area,circum;
printf("Enter the Radius of the circle");
scanf("%f",&r);
area=Area(r);
circum=Circum(r);
printf("The Area of the Circle=\n%f",area);
printf("\nThe Circumference of the Circle=\n%f",circum);
getch();
}
float Area(float f1)
{
float area;
area=3.14*f1*f1;
return area;
}
float Circum(float f2)
{
float circum;
circum=2*3.14*f2;
return circum;
}