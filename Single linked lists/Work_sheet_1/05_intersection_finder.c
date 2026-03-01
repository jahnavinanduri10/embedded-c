#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *link;
}Slist;

int main()
{

}

int intersection_finder(Slist *head1,Slist *head2)
{
    if(head1 == NULL && head2 == NULL)
    {
        printf("Lists are empty\n");
        return;
    }

    Slist *temp1 = head1,*temp2 = head2;

    while(temp1 && temp2)
    {
        if(temp1->data == temp2->data)
        {
            printf("Intersection found at node with data: %d\n",temp1->data);
            return;
        }
        temp1 = temp1->link;
        temp2 = temp2->link;
    }

    printf("No intersection point found\n");
    return ;
}