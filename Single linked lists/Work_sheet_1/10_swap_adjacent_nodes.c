#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int main()
{

}

struct Node* swapPairs(struct Node *head)
{
    if(!head || !head->next)
        return head;

    struct Node *prev = NULL;
    struct Node *curr = head;

    head = curr->next; //new head will be the second node after first swap

    while(curr && curr->next)
    {
        struct Node *next = curr->next;
        struct Node *nextpair = next->next;

        next->next = curr;
        curr->next = nextpair;

        if(prev)
            prev->next = next;

        prev = curr;
        curr = nextpair;
    }
    return head;

}