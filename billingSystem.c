#include <stdio.h>
#include <string.h>

int main()
{
    char food[10];
    int item_selected = 0, quantity;
    float total = 0.0;
    int item_count = 0;

    struct Item
    {
        int number;
        char name[20];
        int quantity;
        float price;
    } items[10];

    for (int i = 1; i < 5; i++)
    {
        printf("What do you want to eat (veg/non-veg/both)? ");
        scanf("%s", food);

        if (strcmp(food, "veg") == 0 || strcmp(food, "non-veg") == 0 || strcmp(food, "both") == 0)
        {
            printf("You chose: %s\n", food);
            break;
        }
        else
        {
            printf("You did not choose from the selected items. Please choose from (veg/non-veg/both)...\n\n");
            continue;
        }
    }

    do
    {
        if (strcmp(food, "veg") == 0)
        {
            printf("\n\n All veg items (select items by using item number): \n 1.val-rice \n 2.ponir-rice\n 3.veg-tarka\n 4.veg-pokorah\n 5.veg-tiki\n");
        }
        else if (strcmp(food, "non-veg") == 0)
        {
            printf("\n\n All non-veg items (select items by using item number): \n 6.egg-rice \n 7.chicken-rice\n 8.egg-tarka\n 9.chicken-pokorah\n 10.chicken-tiki\n");
        }
        else if (strcmp(food, "both") == 0)
        {
            printf("\n\n All items (select items by using item number): \n 1.egg-rice \n 2.chicken-rice\n 3.egg-tarka\n 4.chicken-pokorah\n 5.chicken-tiki\n 6.val-rice \n 7.ponir-rice\n 8.veg-tarka\n 9.veg-pokorah\n 10.veg-tiki\n");
        }

        printf("Your selected item no: ");
        scanf("%d", &item_selected);

        switch (item_selected)
        {
        case 1:
            strcpy(items[item_count].name, "egg-rice");
            items[item_count].price = 100;
            break;
        case 2:
            strcpy(items[item_count].name, "chicken-rice");
            items[item_count].price = 110;
            break;
        case 3:
            strcpy(items[item_count].name, "egg-tarka");
            items[item_count].price = 80;
            break;
        case 4:
            strcpy(items[item_count].name, "chicken-pokorah");
            items[item_count].price = 60;
            break;
        case 5:
            strcpy(items[item_count].name, "chicken-tiki");
            items[item_count].price = 120;
            break;
        case 6:
            strcpy(items[item_count].name, "val-rice");
            items[item_count].price = 90;
            break;
        case 7:
            strcpy(items[item_count].name, "ponir-rice");
            items[item_count].price = 150;
            break;
        case 8:
            strcpy(items[item_count].name, "veg-tarka");
            items[item_count].price = 140;
            break;
        case 9:
            strcpy(items[item_count].name, "veg-pokorah");
            items[item_count].price = 170;
            break;
        case 10:
            strcpy(items[item_count].name, "veg-tiki");
            items[item_count].price = 190;
            break;
        default:
            printf("Invalid input, please select a valid item number.\n");
            continue;
        }

        printf("Enter the quantity: ");
        scanf("%d", &quantity);
        items[item_count].quantity = quantity;
        total += items[item_count].price * quantity;
        item_count++;

        printf("Do you want to add more items? (yes/no): ");
        char more[3];
        scanf("%s", more);

        if (strcmp(more, "no") == 0)
        {
            break;
        }

    } while (1);

    printf("\n\nSelected items:\n");
    for (int i = 0; i < item_count; i++)
    {
        printf("%d. %s (Quantity: %d, Price: %.2f)\n", i + 1, items[i].name, items[i].quantity, items[i].price * items[i].quantity);
    }

    printf("Total price = %.2f\n", total);
    printf(".....Thank you ....\n");

    return 0;
}

