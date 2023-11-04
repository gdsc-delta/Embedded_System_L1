#include <stdio.h>

int main() {
    int grade;
    char re;

    do {
        printf("Enter your grade: ");
        scanf("%d", &grade);

        if (grade > 85) {
            printf("Rating: Excellent\n");
        } else if (grade >= 75) {
            printf("Rating: Very Good\n");
        } else if (grade >= 65) {
            printf("Rating: Good\n");
        } else if (grade >= 50) {
            printf("Rating: Normal\n");
        } else {
            printf("Rating: Failed\n");
        }

        printf("Do you want to enter another grade? (y/n): ");
        scanf(" %c", &re);
    } while (re == 'y' || re == 'Y');

    return 0;
}
