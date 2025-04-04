#include <stdio.h>
#include <string.h>

struct Product {
    char productName[100];
    int productID;
    float price;
};

// Function to sort products by price in descending order using bubble sort
void sortProductsByPrice(struct Product* products, int count) {
    struct Product temp; // Temporary variable for swapping
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (products[j].price < products[j + 1].price) { // Change to descending order
                // Swap the products
                temp = products[j];
                products[j] = products[j + 1];
                products[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Product products[100]; // Array to hold products
    int count;

    // Prompt user for the number of products
    printf("How many products do you want? ");
    scanf("%d", &count);

    // Input product details
    for (int i = 0; i < count; i++) {
        printf("Enter the details for product %d:\n", i + 1);
        printf("Enter the product name: ");
        scanf("%s", products[i].productName);

        printf("Enter the product ID: ");
        scanf("%d", &products[i].productID);

        printf("Enter the price: ");
        scanf("%f", &products[i].price);
    }

    // Sort the products by price
    sortProductsByPrice(products, count);

    // Print the sorted products
    printf("\nProducts sorted by price (descending order):\n");
    for (int i = 0; i < count; i++) {
        printf("Product Name: %s, Product ID: %d, Price: %.2f\n", 
               products[i].productName, products[i].productID, products[i].price);
    }

    return 0; // Exit the program successfully
}
