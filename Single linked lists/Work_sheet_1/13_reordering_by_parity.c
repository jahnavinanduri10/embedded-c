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

struct Node* rearrangeOddEven(struct Node *head)
{
    if (!head || !head->next)
        return head;

    struct Node *odd = head;
    struct Node *even = head->next;
    struct Node *evenHead = even;

    while (even && even->next) {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;
    return head;
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

    head = rearrangeOddEven(head);

    printf("Reordered list: ");
    printList(head);

    return 0;
}