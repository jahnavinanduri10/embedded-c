// Create two lists:
// less → nodes < x
// greater → nodes >= x
// Traverse original list once
// Append nodes to the appropriate list
//Join both lists

#include <stdio.h>
#include <stdlib.h>

/* Node definition */
struct Node {
    int data;
    struct Node *next;
};

typedef struct Node Slist;

/* Create new node */
Slist* createNode(int data)
{
    Slist *newNode = (Slist *)malloc(sizeof(Slist));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

/* Insert at end */
void insertEnd(Slist **head, int data)
{
    Slist *newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Slist *temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
}

/* Partition list around x */
Slist* partitionList(Slist *head, int x)
{
    Slist *lessHead = NULL, *lessTail = NULL;
    Slist *greaterHead = NULL, *greaterTail = NULL;

    while (head)
    {
        Slist *next = head->next;
        head->next = NULL;

        if (head->data < x)
        {
            if (!lessHead)
                lessHead = lessTail = head;
            else {
                lessTail->next = head;
                lessTail = head;
            }
        }
        else
        {
            if (!greaterHead)
                greaterHead = greaterTail = head;
            else {
                greaterTail->next = head;
                greaterTail = head;
            }
        }

        head = next;
    }

    /* Join both lists */
    if (lessTail)
        lessTail->next = greaterHead;
    else
        lessHead = greaterHead;

    return lessHead;
}

/* Print list */
void printList(Slist *head)
{
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

/* Main function */
int main()
{
    Slist *head = NULL;
    int x = 5;

    /* Input list: 3 5 7 5 9 2 1 */
    insertEnd(&head, 3);
    insertEnd(&head, 5);
    insertEnd(&head, 7);
    insertEnd(&head, 5);
    insertEnd(&head, 9);
    insertEnd(&head, 2);
    insertEnd(&head, 1);

    printf("Original list:\n");
    printList(head);

    head = partitionList(head, x);

    printf("Reordered list around %d:\n", x);
    printList(head);

    return 0;
}

