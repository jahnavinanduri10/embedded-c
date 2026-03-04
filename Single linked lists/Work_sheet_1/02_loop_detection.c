#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Create new node
struct Node* createNode(int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert node at end
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

// Detect and remove loop
void detectAndRemoveLoop(struct Node *head) {
    struct Node *slow = head;
    struct Node *fast = head;

    //Detect loop
    while (slow && fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            printf("Loop detected\n");
            break;
        }
    }

    // No loop
    if (slow != fast)
        return;

    //Remove loop
    slow = head;
    while (slow->next != fast->next) {
        slow = slow->next;
        fast = fast->next;
    }

    fast->next = NULL;
    printf("Loop removed\n");
}

void printList(struct Node *head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;

    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    insertEnd(&head, 4);
    insertEnd(&head, 5);

    head->next->next->next->next->next = head->next->next;

    detectAndRemoveLoop(head);

    printf("Linked list after loop removal:\n");
    printList(head);

    return 0;
}