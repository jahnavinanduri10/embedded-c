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

/* Find nth node from end */
void nthFromEnd(struct Node *head, int n)
{
    struct Node *slow = head;
    struct Node *fast = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    /* Move fast n steps ahead */
    for (int i = 0; i < n; i++) {
        if (fast == NULL) {
            printf("n is greater than the number of nodes\n");
            return;
        }
        fast = fast->next;
    }

    /* Move both pointers */
    while (fast) {
        slow = slow->next;
        fast = fast->next;
    }

    printf("Result: %d\n", slow->data);
}

int main()
{
    struct Node *head = NULL;

    append(&head, 1);
    append(&head, 3);
    append(&head, 5);
    append(&head, 11);

    int n = 3;

    printf("List: 1 3 5 11\n");
    nthFromEnd(head, n);

    return 0;
}