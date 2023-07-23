#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Book {
    char title[100];
    char author[100];
};
int main() {
    int numBooks;
    printf("Enter the number of books: ");
    scanf("%d", &numBooks);
    struct Book* bookList = (struct Book*)malloc(numBooks * sizeof(struct Book));
    if (bookList == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }
    for (int i = 0; i < numBooks; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title: ");
        getchar(); 
        fgets(bookList[i].title, sizeof(bookList[i].title), stdin);
        bookList[i].title[strcspn(bookList[i].title, "\n")] = '\0'; 

        printf("Author: ");
        fgets(bookList[i].author, sizeof(bookList[i].author), stdin);
        bookList[i].author[strcspn(bookList[i].author, "\n")] = '\0';
    }

    printf("Details of Books:\n");
    for (int i = 0; i < numBooks; i++) {
        printf("Book %d: Title: %s, Author: %s\n", i + 1, bookList[i].title, bookList[i].author);
    }

    free(bookList);
    return 0;
}
