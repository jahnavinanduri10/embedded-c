#include <stdio.h>
#include <stdlib.h>

/*Split the list into two halves using slow & fast pointers
Recursively sort each half
Merge two sorted lists into one sorted list
Continue until the list has 0 or 1 node */

struct Node {
    int data;
    struct Node *next;
};

/* Append node at end */
void append(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
}

/* Print linked list */
void printList(struct Node *head)
{
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

/* Split list into two halves */
void splitList(struct Node *source,
               struct Node **front,
               struct Node **back)
{
    struct Node *slow = source;
    struct Node *fast = source->next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    *front = source;
    *back = slow->next;
    slow->next = NULL;
}

/* Merge two sorted lists */
struct Node* sortedMerge(struct Node *a, struct Node *b)
{
    if (!a) return b;
    if (!b) return a;

    struct Node *result = NULL;

    if (a->data <= b->data) {
        result = a;
        result->next = sortedMerge(a->next, b);
    } else {
        result = b;
        result->next = sortedMerge(a, b->next);
    }

    return result;  
}

/* Merge sort function */
void mergeSort(struct Node **headRef)
{
    struct Node *head = *headRef;
    struct Node *a;
    struct Node *b;

    if (!head || !head->next)
        return;

    splitList(head, &a, &b);

    mergeSort(&a);
    mergeSort(&b);

    *headRef = sortedMerge(a, b);
}

int main()
{
    struct Node *head = NULL;

    int values[] = {7, 3, 5, 2, 9, 1};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < n; i++)
        append(&head, values[i]);

    printf("Original list: ");
    printList(head);

    mergeSort(&head);

    printf("Sorted list:   ");
    printList(head);

    return 0;
}