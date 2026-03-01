#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void reverse_string(char *start, char *end)
{
    if (start >= end)
        return;

    char temp = *start;
    *start = *end;
    *end = temp;

    reverse_string(start + 1, end - 1);
}

void traverse_list(struct Node *head)
{
    if (head == NULL)
        return;

    printf("%d ", head->data);
    traverse_list(head->next);
}

int sum_array(int *arr, int n)
{
    if (n == 0)
        return 0;

    return *arr + sum_array(arr + 1, n - 1);
}

int main()
{
    char str[] = "recursion";
    int len = 0;
    while (str[len])
        len++;

    reverse_string(str, str + len - 1);
    printf("Reversed string: %s\n", str);

    struct Node *head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = NULL;

    printf("Linked list traversal: ");
    traverse_list(head);
    printf("\n");

    int arr[] = {1, 2, 3, 4, 5};
    printf("Sum of array: %d\n", sum_array(arr, 5));

    while (head)
    {
        struct Node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}