// Count total number of nodes → n
// kth node from start
// kth node from end → (n - k + 1)th node
// Keep track of previous nodes
// Swap the links carefully
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

void swapKthNode(struct Node **head, int k)
{
    if (*head == NULL)
        return;

    int count = 0;
    struct Node *temp = *head;

    /* Count number of nodes */
    while (temp) {
        count++;
        temp = temp->next;
    }

    if (k > count || 2 * k - 1 == count)
        return;

    struct Node *prevX = NULL, *currX = *head;
    for (int i = 1; i < k; i++) {
        prevX = currX;
        currX = currX->next;
    }

    struct Node *prevY = NULL, *currY = *head;
    for (int i = 1; i < count - k + 1; i++) {
        prevY = currY;
        currY = currY->next;
    }

    if (prevX)
        prevX->next = currY;
    else
        *head = currY;

    if (prevY)
        prevY->next = currX;
    else
        *head = currX;

    struct Node *tempNext = currX->next;
    currX->next = currY->next;
    currY->next = tempNext;
}

int main()
{
    struct Node *head = NULL;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);

    int k = 2;

    printf("Original list: ");
    printList(head);

    swapKthNode(&head, k);

    printf("Modified list: ");
    printList(head);

    return 0;
}
