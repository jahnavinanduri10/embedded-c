#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node Slist;

/* Function to find intersection (logic unchanged) */
int intersection_finder(Slist *head1, Slist *head2)
{
    if (head1 == NULL && head2 == NULL)
    {
        printf("Lists are empty\n");
        return 0;
    }

    Slist *temp1 = head1;
    Slist *temp2 = head2;

    while (temp1 && temp2)
    {
        if (temp1->data == temp2->data)
        {
            printf("Intersection found at node with data: %d\n", temp1->data);
            return 1;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    printf("No intersection point found\n");
    return 0;
}

/* Helper to create node */
Slist* createNode(int data)
{
    Slist *newNode = (Slist *)malloc(sizeof(Slist));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

/* Main function */
int main()
{
    /* Create first list: 1 -> 2 -> 3 */
    Slist *head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);

    /* Create second list: 4 -> 2 -> 6 */
    Slist *head2 = createNode(4);
    head2->next = createNode(2);
    head2->next->next = createNode(6);

    /* Call function */
    intersection_finder(head1, head2);

    return 0;
}