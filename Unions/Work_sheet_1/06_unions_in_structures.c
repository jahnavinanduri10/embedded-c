/*Unions in Structures
Log Session a structure Student with a union inside it that can hold either an int roll_number or a char id[10].
Add a member char type to indicate which member is active.
Write functions to initialize and display the data for both types of students.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student{
    union{
        int roll_number;
        char id[20];
    }info;
    char type;
};

void init_roll(struct Student *s,int roll)
{
    s->info.roll_number = roll;
    s->type = 'r';
}

void init_id(struct Student *s,char *id)
{
    strncpy(s->info.id,id,10);
    s->type = 'i';
}

void display(struct Student *s)
{
    if(s->type == 'r')
        printf("Roll number: %d\n",s->info.roll_number);
    else if(s->type == 'i')
        printf("ID: %s\n",s->info.id);
}

int main()
{
    struct Student s1,s2;

    init_roll(&s1,101);
    init_id(&s2,"ST12");

    display(&s1);
    display(&s2);
}
