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

struct Node* interleaveLists(struct Node *l1, struct Node *l2)
{
    struct Node dummy;
    struct Node *tail = &dummy;
    dummy.next = NULL;

    while (l1 && l2) {
        tail->next = l1;
        l1 = l1->next;
        tail = tail->next;

        tail->next = l2;
        l2 = l2->next;
        tail = tail->next;
    }

    /* Attach remaining nodes */
    if (l1)
        tail->next = l1;
    else
        tail->next = l2;

    return dummy.next;
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

    printf("List1: ");
    printList(list1);

    printf("List2: ");
    printList(list2);

    struct Node *result = interleaveLists(list1, list2);

    printf("Interleaved list: ");
    printList(result);

    return 0;
}