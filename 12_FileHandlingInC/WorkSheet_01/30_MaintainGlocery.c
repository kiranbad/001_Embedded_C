/*30. Log Session a grocery store inventory where you can add, update, or remove items using a file.
Input: Add item: Milk, 2 litres, Rs.40
Output: Inventory file now includes the new item*/
#include <stdio.h>

int main() {
    FILE *fptr;
    char name[50], quantity[20];
    float price;

    // Open inventory file in append mode
    fptr = fopen("inventory.txt", "a");
    if (!fptr) {
        perror("File");
        return 1;
    }

    // Get item details
    printf("Enter item name: ");
    scanf(" %[^\n]s", name);          // read full line
    printf("Enter quantity: ");
    scanf(" %[^\n]s", quantity);
    printf("Enter price: ");
    scanf("%f", &price);

    // Write to file
    fprintf(fptr, "%s, %s, %.2f\n", name, quantity, price);

    fclose(fptr);
    printf("Item added successfully!\n");

    return 0;
}