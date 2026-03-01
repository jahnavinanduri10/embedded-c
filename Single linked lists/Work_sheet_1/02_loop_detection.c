typedef struct node
{
	int data;
	struct node *link;
}Slist;



int find_loop(Slist *head)
{
    if(!(head))
        return -1;
    
    Slist *temp = head;
    
    while(temp->link)
    {
        if(temp->data < temp->link->data)
            temp = temp->link;
        else 
            return 1;
    }
    return 0;
}