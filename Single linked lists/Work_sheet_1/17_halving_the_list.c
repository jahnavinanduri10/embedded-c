#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

/* Create new node */
struct Node* newNode(int data)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

/* Append node at end */
void append(struct Node **head, int data)
{
    struct Node *node = newNode(data);

    if (*head == NULL) {
        *head = node;
        return;
    }

    struct Node *temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = node;
}

/* Print list */
void printList(struct Node *head)
{
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

/* Split list into two halves */
void splitList(struct Node *head,
               struct Node **first,
               struct Node **second)
{
    if (!head) {
        *first = NULL;
        *second = NULL;
        return;
    }

    struct Node *slow = head;
    struct Node *fast = head->next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    *first = head;
    *second = slow->next;
    slow->next = NULL;
}

int main()
{
    struct Node *head = NULL;
    struct Node *first = NULL;
    struct Node *second = NULL;

    for (int i = 1; i <= 5; i++)
        append(&head, i);

    printf("Original list: ");
    printList(head);

    splitList(head, &first, &second);

    printf("First half:  ");
    printList(first);

    printf("Second half: ");
    printList(second);

    return 0;
}