#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stddef.h>

struct employee
{
    char * name;
    int * phireDate;
    float * psalary;
};

struct employee2
{
    char name[50];
    int hireDate;
    float salary;
};


typedef struct employee2 aTest;

int main(void){
    struct employee2 aPerson = {"Antonio de Odilon", 23041992, 12350.0124};
    printf("%s - %d - %f\n\n", aPerson.name, aPerson.hireDate, aPerson.salary);

    aTest anotherPerson = {"Antoinette Madureira", 1286471, 19284.918};
    printf("%s - %d - %f\n\n", anotherPerson.name, anotherPerson.hireDate, anotherPerson.salary);

    struct employee test;
    
    char testName[50];
    int lengthString;

    int testHireDate;
    int * ptestHireDate = &testHireDate;

    float testSalary;
    float * ptestSalary = &testSalary;

    printf("Please type the name of an employee: ");
    scanf(" ");
    gets(testName);
    lengthString = strlen(testName);
    test.name = (char*)calloc(lengthString, sizeof(char));
    strcpy(test.name, testName);

    printf("Now type in the date you hired this person: ");
    scanf("%d", ptestHireDate);
    test.phireDate = ptestHireDate;

    printf("Finally, this person's salary: ");
    scanf("%f", ptestSalary);
    test.psalary = ptestSalary;

    printf("Here's the information: \n%s - %p \n%d - %p \n%f - %p\n",
    test.name, test.name, *test.phireDate, test.phireDate, *test.psalary, test.psalary);
    printf("This is stored in the following address of memory: %p\n", &test);

    return 0;
};
