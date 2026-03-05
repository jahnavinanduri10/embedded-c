#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void addItem()
{
    FILE *fp = fopen("inventory.txt", "a");
    char name[50], quantity[50];
    int price;

    if (!fp)
    {
        printf("File error\n");
        return;
    }

    printf("Enter item name: ");
    scanf("%s", name);

    printf("Enter quantity: ");
    scanf("%s", quantity);

    printf("Enter price: ");
    scanf("%d", &price);

    fprintf(fp, "%s,%s,%d\n", name, quantity, price);
    fclose(fp);

    printf("Item added successfully.\n");
}

void updateItem()
{
    FILE *fp = fopen("inventory.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    char name[50], quantity[50], line[MAX];
    int price, found = 0;
    char search[50];

    if (!fp || !temp)
    {
        printf("File error\n");
        return;
    }

    printf("Enter item name to update: ");
    scanf("%s", search);

    printf("Enter new quantity: ");
    scanf("%s", quantity);

    printf("Enter new price: ");
    scanf("%d", &price);

    while (fgets(line, MAX, fp))
    {
        sscanf(line, "%[^,],%[^,],%d", name, quantity, &price);

        if (strcmp(name, search) == 0)
        {
            fprintf(temp, "%s,%s,%d\n", search, quantity, price);
            found = 1;
        }
        else
        {
            fputs(line, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("inventory.txt");
    rename("temp.txt", "inventory.txt");

    if (found)
        printf("Item updated successfully.\n");
    else
        printf("Item not found.\n");
}

void removeItem()
{
    FILE *fp = fopen("inventory.txt", "r");
    FILE *temp = fopen("temp.txt", "w");
    char name[50], quantity[50], line[MAX];
    int price, found = 0;
    char search[50];

    if (!fp || !temp)
    {
        printf("File error\n");
        return;
    }

    printf("Enter item name to remove: ");
    scanf("%s", search);

    while (fgets(line, MAX, fp))
    {
        sscanf(line, "%[^,],%[^,],%d", name, quantity, &price);

        if (strcmp(name, search) != 0)
            fputs(line, temp);
        else
            found = 1;
    }

    fclose(fp);
    fclose(temp);

    remove("inventory.txt");
    rename("temp.txt", "inventory.txt");

    if (found)
        printf("Item removed successfully.\n");
    else
        printf("Item not found.\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n1. Add Item\n2. Update Item\n3. Remove Item\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: addItem(); break;
            case 2: updateItem(); break;
            case 3: removeItem(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}