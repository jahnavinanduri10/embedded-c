/*List Rotation Challenges
Question:
Write a C program to rotate a linked list to the right by k places.
Sample data:
List: 1 3 4 7 9
k = 2
Expected output:
Rotated list: 4 7 9 1 3
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* insert(struct node *head, int data)
{
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    if(head == NULL)
        return new;

    struct node *temp = head;
    while(temp->next)
        temp = temp->next;

    temp->next = new;
    return head;
}

struct node* rotate(struct node *head, int k)
{
    if(head == NULL || head->next == NULL)
        return head;

    struct node *temp = head;
    int count = 1;

    // Find length and last node
    while(temp->next)
    {
        temp = temp->next;
        count++;
    }

    // Connect last node to head (make circular)
    temp->next = head;

    k = k % count;
    int steps = count - k;

    // Move to new last node
    struct node *newTail = head;
    for(int i = 1; i < steps; i++)
        newTail = newTail->next;

    struct node *newHead = newTail->next;
    newTail->next = NULL;

    return newHead;
}

void print(struct node *head)
{
    while(head)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node *head = NULL;
    int n, x, k;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        head = insert(head, x);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    printf("Original List:\n");
    print(head);

    head = rotate(head, k);

    printf("Rotated List:\n");
    print(head);

    return 0;
}
