/*Linked List Addition Variants
Question:
Write a C program to add two numbers represented by linked lists.
Sample data:
List 1: 8 7 9 2
List 2: 2 1 2 3
Expected output:
Result: 0 9 1 6 (carry handled)
*/
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

/* Insert node at end */
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

/* Print linked list */
void printList(struct Node *head)
{
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

/* Add two numbers represented by linked lists */
struct Node* addLists(struct Node *l1, struct Node *l2)
{
    struct Node *result = NULL;
    struct Node *tail = NULL;
    int carry = 0;

    while (l1 || l2 || carry) {
        int sum = carry;

        if (l1) {
            sum += l1->data;
            l1 = l1->next;
        }

        if (l2) {
            sum += l2->data;
            l2 = l2->next;
        }

        carry = sum / 10;
        int digit = sum % 10;

        struct Node *node = newNode(digit);

        if (!result) {
            result = tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    return result;
}

int main()
{
    struct Node *num1 = NULL;
    struct Node *num2 = NULL;
    struct Node *sum = NULL;

    /* Number 1: 342 -> 2->4->3 */
    append(&num1, 2);
    append(&num1, 4);
    append(&num1, 3);

    /* Number 2: 465 -> 5->6->4 */
    append(&num2, 5);
    append(&num2, 6);
    append(&num2, 4);

    printf("Number 1: ");
    printList(num1);

    printf("Number 2: ");
    printList(num2);

    sum = addLists(num1, num2);

    printf("Sum:      ");
    printList(sum);

    return 0;
}