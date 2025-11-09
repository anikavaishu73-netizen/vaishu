#include<stdio.h>
int main()
{
float p, t, r, si;
printf("Enter principle, time, rate:");
scanf("%f %f %f",&p,&t,&r);
si= (p*t*r)/100;
printf("simple intrest is %f", si);
return 0;
}
