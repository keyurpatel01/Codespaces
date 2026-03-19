/*
Structure: different type of data store in single variable
*/
#include <stdio.h>
struct Student
{
    int id;
    int marks;
};
struct Employee
{
    int emp_id;
    char emp_name[100];
    char emp_department[100];
};

int main()
{
    struct Student s1;
    s1.id = 1;
    s1.marks = 80;
    printf("\nid is %d\n", s1.id);
    printf("\nmark is %d\n", s1.marks);
    struct Employee e1 = {123, "Krishna", 'IT'};
    printf("\nid is %d\n", e1.emp_id);
    printf("\nname is %s\n", e1.emp_name);
    printf("\ndepartment is %s\n", e1.emp_department);

    return 0;
}