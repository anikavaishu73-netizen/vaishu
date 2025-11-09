#include<stdio.h>
int main()
{
int age;
char name [20];
float marks;
printf("Enter name:");
scanf("%s", &name);
printf("Enter age:");
scanf("%d",&age);
printf("Enter marks:");
scanf("%f",&marks);
printf("Name: %s \n", name);
printf("Age: %d \n", age);
printf("Marks: %f ",marks);
return 0;
}
