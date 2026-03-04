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

/* Print list */
void printList(struct Node *head)
{
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

/* Merge two sorted lists */
struct Node* mergeTwoLists(struct Node *l1, struct Node *l2)
{
    if (!l1) return l2;
    if (!l2) return l1;

    struct Node *result = NULL;

    if (l1->data <= l2->data) {
        result = l1;
        result->next = mergeTwoLists(l1->next, l2);
    } else {
        result = l2;
        result->next = mergeTwoLists(l1, l2->next);
    }
    return result;
}

/* Merge K sorted lists */
struct Node* mergeKLists(struct Node *lists[], int k)
{
    if (k == 0)
        return NULL;

    struct Node *result = lists[0];

    for (int i = 1; i < k; i++) {
        result = mergeTwoLists(result, lists[i]);
    }

    return result;
}

int main()
{
    int k = 3;
    struct Node *lists[k];

    lists[0] = NULL;
    append(&lists[0], 1);
    append(&lists[0], 4);
    append(&lists[0], 7);

    lists[1] = NULL;
    append(&lists[1], 2);
    append(&lists[1], 5);
    append(&lists[1], 8);

    lists[2] = NULL;
    append(&lists[2], 3);
    append(&lists[2], 6);
    append(&lists[2], 9);

    struct Node *mergedHead = mergeKLists(lists, k);

    printf("Merged list: ");
    printList(mergedHead);

    return 0;
}