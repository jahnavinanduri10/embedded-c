#include <stdio.h>
#include <stdlib.h>

typedef struct Linkedlist
{
    int data;
    struct Linkedlist *next;
}Node;

int main()
{
    Node *head = (Node*)malloc(sizeof(Node));
    Node *second = (Node*)malloc(sizeof(Node));
    Node *third = (Node*)malloc(sizeof(Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    Node *temp = head;
    while(temp)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");
    free(head);
    free(second);
    free(third);
}