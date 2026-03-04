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

/* Reverse alternate k nodes */
struct Node* reverseAlternateK(struct Node *head, int k)
{
    struct Node *curr = head;
    struct Node *prev = NULL;
    struct Node *next = NULL;
    int count = 0;

    while (curr && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (head)
        head->next = curr;

    count = 0;
    while (curr && count < k - 1) {
        curr = curr->next;
        count++;
    }

    if (curr)
        curr->next = reverseAlternateK(curr->next, k);

    return prev;
}

int main()
{
    struct Node *head = NULL;
    int k = 2;

    for (int i = 1; i <= 9; i++)
        append(&head, i);

    printf("Original list: ");
    printList(head);

    head = reverseAlternateK(head, k);

    printf("After reversing alternate %d nodes: ", k);
    printList(head);

    return 0;
}