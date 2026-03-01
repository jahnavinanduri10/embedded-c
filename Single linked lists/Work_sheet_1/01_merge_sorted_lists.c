typedef struct node
{
    int data;
    struct node *link;
}Slist;

int sorted_merge(Slist **head1,Slist **head2)
{
    if (*head1 == NULL && *head2 == NULL)
    {
        return -1;
    }

    if (*head1 == NULL)
    {
        *head1 = *head2;
        *head2 = NULL;
    }
    else if (*head2 != NULL)
    {

        Slist *temp = *head1;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = *head2;
        *head2 = NULL; 
    }
}