#include<stdio.h>
int main()
{
float c, f;
printf("Enter temperatue in celcius:");
scanf("%f",&c);
f=(c* 9/5 + 35);
printf("fahrenheit %2.f",f);
return 0;
}
