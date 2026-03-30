/*Alternate Node Merging Challenges
Question:
Write a C program to merge alternate nodes of two linked lists.
Sample data:
List1: 9 7 5
List2: 10 8 6
Expected output:
Merged list: 9 10 7 8 5 6
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

void mergeAlternate(struct Node *l1, struct Node **l2)
{
    struct Node *p1 = l1;
    struct Node *p2 = *l2;

    while (p1 && p2) {
        struct Node *p1Next = p1->next;
        struct Node *p2Next = p2->next;

        p1->next = p2;
        p2->next = p1Next;

        p1 = p1Next;
        p2 = p2Next;
    }

    *l2 = p2;  
}

int main()
{
    struct Node *list1 = NULL;
    struct Node *list2 = NULL;

    append(&list1, 1);
    append(&list1, 3);
    append(&list1, 5);

    append(&list2, 2);
    append(&list2, 4);
    append(&list2, 6);
    append(&list2, 8);

    printf("List1 before merge: ");
    printList(list1);

    printf("List2 before merge: ");
    printList(list2);

    mergeAlternate(list1, &list2);

    printf("List1 after merge:  ");
    printList(list1);

    printf("Remaining List2:    ");
    printList(list2);

    return 0;
}