#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[50];
    int age;
};

int main()
{
    int n;
    struct Person *p;
    printf("Enter number of persons: ");
    scanf("%d", &n);

    p = (struct Person *)malloc(n * sizeof(struct Person));

    if (p == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of person %d\n", i + 1);

        printf("Name: ");
        scanf("%s", p[i].name);   

        printf("Age: ");
        scanf("%d", &p[i].age);
    }

    printf("\n--- Stored Details ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("Person %d: Name = %s, Age = %d\n",
               i + 1, p[i].name, p[i].age);
    }

    free(p);

    return 0;
}