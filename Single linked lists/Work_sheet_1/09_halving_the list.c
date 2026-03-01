#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int main()
{

}

void halving_the_list(struct Node *head)
{
    struct Node *first = head;
    struct Node *second;
    struct Node *slow = NULL;
    struct Node *fast = head;

    while(fast->next)
    {
        if(slow == NULL)
            slow = fast;
        else
            slow = slow->next;
        fast = fast->next->next;
    }
    second = slow;
}