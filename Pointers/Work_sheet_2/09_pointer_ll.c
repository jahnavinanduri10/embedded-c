/*Pointer and Linked List
Goal: Implement a singly linked list using pointers for node management and dynamic memory allocation.
Activity:
1.	Define a node structure with data and next pointer.
2.	Log Session functions to add nodes at the beginning, end, or middle of the list using pointers.
3.	Traverse the list using pointers to access and print data.
4.	Delete nodes and free memory dynamically.*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insert_begin(struct Node **head, int val)
{
    struct Node *new = malloc(sizeof(struct Node));
    if (!new)
        return;
    new->data = val;
    new->next = *head;
    *head = new;
}

void insert_end(struct Node **head, int val)
{
    struct Node *new = malloc(sizeof(struct Node));
    if (!new)
        return;
    new->data = val;
    new->next = NULL;

    if (*head == NULL)
    {
        *head = new;
        return;
    }

    struct Node *temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = new;
}

void insert_middle(struct Node **head, int val, int pos)
{
    struct Node *new = malloc(sizeof(struct Node));
    if (!new)
        return;
    new->data = val;

    struct Node *temp = *head;
    for (int i = 1; i < pos - 1 && temp; i++)
        temp = temp->next;

    if (temp == NULL)
    {
        free(new);
        return;
    }

    new->next = temp->next;
    temp->next = new;
}

void delete_node(struct Node **head, int val)
{
    struct Node *temp = *head, *prev = NULL;

    if (temp && temp->data == val)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp && temp->data != val)
    {
        prev = temp;
        temp = temp->next;
    }

    if (!temp)
        return;

    prev->next = temp->next;
    free(temp);
}

void display(struct Node *head)
{
    while (head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = NULL;

    insert_begin(&head, 10);
    insert_end(&head, 30);
    insert_middle(&head, 20, 2);
    insert_end(&head, 40);

    display(head);

    delete_node(&head, 20);
    display(head);

    while (head)
    {
        struct Node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
