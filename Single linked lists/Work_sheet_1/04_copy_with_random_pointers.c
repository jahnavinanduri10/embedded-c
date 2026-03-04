#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *random;
};

/* Create new node */
struct Node* createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->random = NULL;
    return newNode;
}

/* Print list (data + random data) */
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp) {
        printf("Node(%d)", temp->data);
        if (temp->random)
            printf(" -> Random(%d)", temp->random->data);
        else
            printf(" -> Random(NULL)");
        printf("\n");
        temp = temp->next;
    }
}

/* Deep copy linked list with random pointer */
struct Node* cloneList(struct Node *head) {
    struct Node *curr = head;

    /*Insert copied nodes */
    while (curr) {
        struct Node *copy = createNode(curr->data);
        copy->next = curr->next;
        curr->next = copy;
        curr = copy->next;
    }

    /*Set random pointers */
    curr = head;
    while (curr) {
        if (curr->random)
            curr->next->random = curr->random->next;
        curr = curr->next->next;
    }

    /*Separate the lists */
    curr = head;
    struct Node *copyHead = head ? head->next : NULL;

    while (curr) {
        struct Node *copy = curr->next;
        curr->next = copy->next;
        if (copy->next)
            copy->next = copy->next->next;
        curr = curr->next;
    }

    return copyHead;
}

/* Main function */
int main() {
    /* Create original list */
    struct Node *head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);

    /* Set random pointers */
    head->random = head->next->next;        // 1 -> 3
    head->next->random = head;               // 2 -> 1
    head->next->next->random = head->next;   // 3 -> 2

    printf("Original List:\n");
    printList(head);
    
    struct Node *cloned = cloneList(head);

    printf("\nCloned List:\n");
    printList(cloned);

    return 0;
}