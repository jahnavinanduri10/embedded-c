/*Design a simple employee record system using a structure with a union that can store either salary (float) or hourly wage (float), depending on employee type.
Add code to input and print details for a list of employees.
*/
#include <stdio.h>
#include <stdlib.h>

union Info{
    float salary;
    float hourly_wage;
};

struct Employee{
    char name[50];
    int is_salaried;
    union Info inf;
};

int main()
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    for(int i = 0;i < n;i++)
    {
        printf("Enter name: ");
        scanf("%s",emp[i].name);
        printf("Salaried (1) or Hourly (0)?");
        scanf("%d",&emp[i].is_salaried);

        if(emp[i].is_salaried)
        {
            printf("Enter annual salary: ");
            scanf("%f",&emp[i].inf.salary);
        }
        else{
            printf("Enter hourly wage: ");
            scanf("%f",&emp[i].inf.hourly_wage);
        }
    }

    printf("\nEmployee Records:\n");
    for(int i = 0;i < n;i++)
    {
        printf("Name: %s, ",emp[i].name);
        if(emp[i].is_salaried)
            printf("Type: Salaried,Salary: %.2f\n",emp[i].inf.salary);
        else
            printf("Type: Hourly, Hourly wage: %.2f\n",emp[i].inf.hourly_wage);
    }
    free(emp);
}