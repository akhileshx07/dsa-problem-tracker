#include <stdio.h>
#include <string.h>

struct Problem {
    char title[50];
    char topic[50];
};

int main() {
    struct Problem p[100];
    int count = 0;
    int choice;

    while(1) {
        printf("\n1. Add Problem\n2. View Problems\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter Problem Title: ");
            scanf(" %[^\n]", p[count].title);
            printf("Enter Topic: ");
            scanf(" %[^\n]", p[count].topic);
            count++;
        }
        else if(choice == 2) {
            for(int i = 0; i < count; i++) {
                printf("%d. %s - %s\n", i+1, p[i].title, p[i].topic);
            }
        }
        else {
            break;
        }
    }

    return 0;
}