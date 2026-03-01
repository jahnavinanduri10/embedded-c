#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}Slist;

Slist* reverse(Slist *head)
{
    Slist*prev = NULL, *curr = head, *next;

    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int palindrome(Slist *head)
{
    Slist *slow = head, *fast = head;

    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Slist *second_half = reverse(slow->next);
    Slist *first_half = head;

    Slist *temp = second_half;
    int result = 1;

    while (temp)
    {
        if (first_half->data != temp->data)
        {
            result = 0;
            break;
        }
        first_half = first_half->next;
        temp = temp->next;
    }

    slow->next = reverse(second_half);

    return result;
}