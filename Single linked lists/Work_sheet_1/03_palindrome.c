#include <stdio.h>
#include <stdlib.h>

/* Node definition */
struct Node {
    int data;
    struct Node *next;
};

typedef struct Node Slist;

/* Create a new node */
Slist* createNode(int data)
{
    Slist *newNode = (Slist *)malloc(sizeof(Slist));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

/* Insert node at end */
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

/* Reverse linked list */
Slist* reverse(Slist *head)
{
    Slist *prev = NULL, *curr = head, *next = NULL;

    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

/* Check palindrome */
int palindrome(Slist *head)
{
    if (!head || !head->next)
        return 1;

    Slist *slow = head, *fast = head;

    /* Find middle */
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    /* Reverse second half */
    Slist *second_half = reverse(slow->next);
    Slist *first_half = head;

    int result = 1;
    Slist *temp = second_half;

    /* Compare both halves */
    while (temp) {
        if (first_half->data != temp->data) {
            result = 0;
            break;
        }
        first_half = first_half->next;
        temp = temp->next;
    }

    /* Restore original list */
    slow->next = reverse(second_half);

    return result;
}

/* Print list */
void printList(Slist *head)
{
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

/* Main function */
int main()
{
    Slist *head = NULL;

    /* Create palindrome list: 1 -> 2 -> 3 -> 2 -> 1 */
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);
    insertEnd(&head, 2);
    insertEnd(&head, 1);

    printf("Linked List:\n");
    printList(head);

    if (palindrome(head))
        printf("The linked list is a palindrome.\n");
    else
        printf("The linked list is NOT a palindrome.\n");

    return 0;
}