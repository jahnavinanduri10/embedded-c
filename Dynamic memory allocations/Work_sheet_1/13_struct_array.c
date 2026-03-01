#include <stdio.h>
#include <stdlib.h>

struct Person{
    char name[50];
    int age;
};

int main()
{
    int n;
    struct Person *people; 

    printf("Enter no of people: ");
    scanf("%d",&n);

    people = (struct Person *)malloc(n * sizeof(struct Person));
    if(people == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }

    for(int i = 0;i < n;i++)
    {
        printf("Enter name and age for person %d: ",i+1);
        scanf("%s %d",people[i].name,&people[i].age);
    }

    printf("Entered data:\n");
    for(int i = 0;i < n;i++)
    {
        printf("Name: %s, Age: %d\n",people[i].name,people[i].age);
    }

    free(people);
}