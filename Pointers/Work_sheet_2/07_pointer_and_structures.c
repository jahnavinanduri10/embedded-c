#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id;
    float marks;
};

void update_student(struct Student *s)
{
    s->id += 1;
    s->marks += 10.5;
}

int main()
{
    struct Student s1;
    struct Student *ptr = &s1;

    ptr->id = 101;
    ptr->marks = 75.0;

    printf("Before update: id=%d marks=%.2f\n", ptr->id, ptr->marks);

    update_student(ptr);

    printf("After update: id=%d marks=%.2f\n", ptr->id, ptr->marks);

    struct Student *dptr = malloc(sizeof(struct Student));
    if (dptr == NULL)
        return 1;

    dptr->id = 200;
    dptr->marks = 88.5;

    printf("Dynamically allocated: id=%d marks=%.2f\n", dptr->id, dptr->marks);

    update_student(dptr);

    printf("After dynamic update: id=%d marks=%.2f\n", dptr->id, dptr->marks);

    free(dptr);
    dptr = NULL;

    return 0;
}