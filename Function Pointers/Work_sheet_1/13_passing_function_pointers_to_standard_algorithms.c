#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Define structure */
struct Person {
    char name[30];
    int age;
};

/* Comparison function: sort by age (ascending) */
int compareByAge(const void *a, const void *b) {
    const struct Person *p1 = (const struct Person *)a;
    const struct Person *p2 = (const struct Person *)b;

    if (p1->age < p2->age)
        return -1;
    else if (p1->age > p2->age)
        return 1;
    else
        return 0;
}

/* Comparison function: sort by name (alphabetical) */
int compareByName(const void *a, const void *b) {
    const struct Person *p1 = (const struct Person *)a;
    const struct Person *p2 = (const struct Person *)b;

    return strcmp(p1->name, p2->name);
}

/* Utility function to print records */
void printPeople(struct Person people[], int count) {
    for (int i = 0; i < count; i++) {
        printf("%s - %d\n", people[i].name, people[i].age);
    }
}

int main() {
    struct Person people[] = {
        {"Jahnavi", 23},
        {"Anil", 30},
        {"Ravi", 25},
        {"Meena", 28}
    };

    int count = sizeof(people) / sizeof(people[0]);

    printf("Original list:\n");
    printPeople(people, count);

    printf("\nSorted by age:\n");
    qsort(people, count, sizeof(struct Person), compareByAge);
    printPeople(people, count);

    printf("\nSorted by name:\n");
    qsort(people, count, sizeof(struct Person), compareByName);
    printPeople(people, count);

    return 0;
}