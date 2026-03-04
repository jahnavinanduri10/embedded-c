// Check whether k nodes are available
// Reverse first k nodes
// Recursively process the remaining list
// Connect reversed block to the next block

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

struct Node* reverseKGroup(struct Node *head, int k)
{
    struct Node *curr = head;
    struct Node *prev = NULL;
    struct Node *next = NULL;
    int count = 0;

    struct Node *check = head;
    for (int i = 0; i < k; i++) {
        if (!check)
            return head;
        check = check->next;
    }

    while (curr && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (next)
        head->next = reverseKGroup(next, k);

    return prev;
}

int main()
{
    struct Node *head = NULL;
    int k = 3;

    for (int i = 1; i <= 8; i++)
        append(&head, i);

    printf("Original list: ");
    printList(head);

    head = reverseKGroup(head, k);

    printf("Reversed in blocks of %d: ", k);
    printList(head);

    return 0;
}