#include <stdio.h>

struct Book {
    char title[50];
    float price;
};

void main() {
    struct Book b[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter title of book :");
        scanf("%s", b[i].title);

        printf("Enter price of book : ");
        scanf("%f", &b[i].price);
    }

    printf("\nBooks with price > 500:\n");
    for (i = 0; i < 3; i++) {
        if (b[i].price > 500) {
            printf("Title: %s, Price: %f\n", b[i].title, b[i].price);
        }
    }

}
