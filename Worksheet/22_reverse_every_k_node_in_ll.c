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

struct Node* reverse_k_node(struct Node *head,int k)
{
    struct Node *curr = head;
    struct Node *prev = NULL;
    struct Node *next = NULL;
    int count = 0;

    struct Node *temp = head;
    for(int i = 0;i < k;i++)
    {
        if(!temp)
            return head;
        temp = temp->next;
    }

    while(curr && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next)
        head->next = reverse_k_node(next,k);
    return prev;
}

int main()
{
    struct Node *head = NULL;
    int k = 3;

    for(int i = 0;i < 10;i++)
        insert(&head,i+1);

    printf("Original list: ");
    print_list(head);

    head = reverse_k_node(head, k);

    printf("Reversed in blocks of %d: ", k);
    print_list(head);

    return 0;
}