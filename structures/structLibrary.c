#include<stdio.h>

struct lib{

	int serial_number;
	char title[100];
	char Auther_name[100];
	int price;
	int flag;
};





int main(){

	struct lib A[100];
	 int n; // Number of books

    printf("Enter the number of books: ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);

        printf("Accession Number: ");
        scanf("%d", &books[i].accessionNumber);

        printf("Title: ");
	getchar(); // To consume the newline character left by previous input
        fgets(books[i].title, sizeof(books[i].title), stdin);

        books[i].title[strcspn(books[i].title, "\n")] = 0; // Remove newline character
        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0; // Remove newline character

        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("Is the book issued? (1 for Yes, 0 for No): ");
	scanf("%d", &books[i].isIssued);
    }	

	
    	 printf("\nLibrary Book Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Accession Number: %d\n", books[i].accessionNumber);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
        printf("Issued: %s\n", books[i].isIssued ? "Yes" : "No");
    }


	return 0;
}
