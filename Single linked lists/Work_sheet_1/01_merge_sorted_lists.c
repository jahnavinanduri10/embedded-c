#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(struct Node **head, int data) {
    struct Node *newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
}

void printList(struct Node *head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

struct Node* mergeSortedLists(struct Node *l1, struct Node *l2) {

    struct Node dummy;
    struct Node *tail = &dummy;
    dummy.next = NULL;

    while (l1 && l2) {
        if (l1->data <= l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1)
        tail->next = l1;
    else
        tail->next = l2;

    return dummy.next;
}

int main() {
    struct Node *list1 = NULL;
    struct Node *list2 = NULL;
    struct Node *mergedList = NULL;

    insertEnd(&list1, 1);
    insertEnd(&list1, 3);
    insertEnd(&list1, 5);

    insertEnd(&list2, 2);
    insertEnd(&list2, 4);
    insertEnd(&list2, 6);

    printf("List 1: ");
    printList(list1);

    printf("List 2: ");
    printList(list2);

    mergedList = mergeSortedLists(list1, list2);

    printf("Merged List: ");
    printList(mergedList);

    return 0;
}