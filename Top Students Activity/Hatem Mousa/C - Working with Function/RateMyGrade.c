#include <stdio.h>

int main() {
    int grade;
    char re;

    do {
        printf("Enter your grade (0-100): ");
        scanf("%d", &grade);

        switch (grade) {
            case 85 ... 100:
                printf("Rating: Excellent\n");
                break;
            case 75 ... 84:
                printf("Rating: very good\n");
                break;
            case 65 ... 74:
                printf("Rating: good\n");
                break;
            case 50 ... 64:
                printf("Rating: normal\n");
                break;
            default:
                printf("Rating: Failed\n");
                break;
        }

        printf("Do you want to enter another grade? (y/n): ");
        scanf(" %c", &re);
    } while (re == 'y' || re == 'Y');

    return 0;
}
