/*Adjacent Node Swapping Variants
Question:
Write a C program to swap every two adjacent nodes.
Sample data:
List: 1 2 3 4 5
 
Expected output:
Swapped list: 2 1 4 3 5
*/
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* newNode(int data)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

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

void printList(struct Node *head)
{
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

struct Node* swapPairs(struct Node *head)
{
    if (!head || !head->next)
        return head;

    struct Node *prev = NULL;
    struct Node *curr = head;
    struct Node *newHead = head->next;

    while (curr && curr->next) {
        struct Node *next = curr->next;
        struct Node *nextPair = next->next;

        /* swap */
        next->next = curr;
        curr->next = nextPair;

        if (prev)
            prev->next = next;

        prev = curr;
        curr = nextPair;
    }

    return newHead;
}

int main()
{
    struct Node *head = NULL;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);

    printf("Original list: ");
    printList(head);

    head = swapPairs(head);

    printf("After swapping adjacent nodes: ");
    printList(head);

    return 0;
}