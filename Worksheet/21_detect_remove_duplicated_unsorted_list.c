#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* new_node(int data)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void insert(struct Node **head, int data)
{
    struct Node *node = new_node(data);

    if (*head == NULL) {
        *head = node;
        return;
    }

    struct Node *temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = node;
}

void print_list(struct Node *head)
{
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

struct Node* remove_duplicate(struct Node *head)
{
    struct Node *curr = head;

    while(curr != NULL && curr->next != NULL)
    {
        if(curr->data == curr->next->data)
        {
            struct Node *temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        }
        else
            curr = curr->next;
    }

    return head;
}

int main()
{
    struct Node *head = NULL;

    insert(&head,1);
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    insert(&head,3);
    insert(&head,4);

    printf("Original list: ");
    print_list(head);

    head = remove_duplicate(head);

    printf("After removing duplicates in the list: ");
    print_list(head);

    return 0;
}