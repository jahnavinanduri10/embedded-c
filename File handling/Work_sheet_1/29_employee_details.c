#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void addEmployee()
{
    FILE *fp = fopen("employee.txt", "a");
    char name[50];
    int age;

    if (fp == NULL)
    {
        printf("File error\n");
        return;
    }

    printf("Enter employee name: ");
    scanf("%s", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "%s,%d\n", name, age);
    fclose(fp);

    printf("Employee added (info saved in file)\n");
}

void updateEmployee()
{
    FILE *fp = fopen("employee.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    char name[50], line[MAX], search[50];
    int age, newAge, found = 0;

    if (fp == NULL || temp == NULL)
    {
        printf("File error\n");
        return;
    }

    printf("Enter employee name to update: ");
    scanf("%s", search);

    printf("Enter new age: ");
    scanf("%d", &newAge);

    while (fgets(line, MAX, fp))
    {
        sscanf(line, "%[^,],%d", name, &age);

        if (strcmp(name, search) == 0)
        {
            fprintf(temp, "%s,%d\n", name, newAge);
            found = 1;
        }
        else
        {
            fputs(line, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("employee.txt");
    rename("temp.txt", "employee.txt");

    if (found)
        printf("Employee updated successfully\n");
    else
        printf("Employee not found\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n1. Add Employee\n2. Update Employee\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: addEmployee(); break;
            case 2: updateEmployee(); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 3);

    return 0;
}