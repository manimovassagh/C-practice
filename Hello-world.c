#include <stdio.h>
#include <string.h>



typedef struct{
char name[20];
int age;
float gpa;

} Student;

int main()
{
    printf("Hello C language again\n");
    printf("Hello C language");
    //print sample student
    Student s1;
    s1.age = 20;
    s1.gpa = 3.5;
    strcpy(s1.name, "John");
    printf("Student name: %s\n", s1.name);
    printf("Student name: %s\n", s1.name);
    return 0;
}