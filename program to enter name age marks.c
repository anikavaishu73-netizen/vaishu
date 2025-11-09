 #include<stdio.h>
int main()
{
char name [20];

int age;

float marks;

printf("Enter name, age, marks:");

scanf("%s %d %f", &name, &age, &marks);

printf("Name: %s\n age: %d\n marks:%f", name, age, marks);
return 0;
}
