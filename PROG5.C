//Convert the temperature from celsius to Farenhiet.
#include<stdio.h>
#include<conio.h>
void main()
{
void CalculateTemp(float);
float c1;
printf("Enter the Temperature in Celsius");
scanf("%f",&c1);
CalculateTemp(c1);
getche();
}
void CalculateTemp(float t)
{
float f;
f=(9*t)/5+32;
printf("\nThe temperature in Farenheit is=%f",f);

}