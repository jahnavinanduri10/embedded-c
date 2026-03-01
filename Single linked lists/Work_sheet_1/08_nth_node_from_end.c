#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int main()
{

}

int nth_node(struct Node *head,int n)
{
    struct Node *temp = head;
    int total_nodes = 0;
    while(temp)
    {
        total_nodes++;
        temp = temp->next;
    }

    int position = total_nodes - n - 1;

    struct Node *temp1 = head;
    int count = 1;
    while(temp1)
    {
        if(count == position)
        {
            return temp1->data;
        }
        count++;
        temp1 = temp1->next;
    }
}

