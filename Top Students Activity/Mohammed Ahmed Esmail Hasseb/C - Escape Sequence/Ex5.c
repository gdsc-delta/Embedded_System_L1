#include <stdio.h>

int main()
{
    float num1;
    float num2;
    printf("Note: the number must be consist of 3 numbers\n");
    printf("Enter The 1st Number:\n");
    scanf("%f", &num1);
    printf("Enter The 2nd Number:\n");
    scanf("%f", &num2);

    if (num1>999){
        printf("\nThe 1st Number is Wrong\n");
    }
    else{
        printf("\n%f\n", num1);
    }

    if (num2>999){
        printf("The 2nd Number is Wrong\n");
    }
    else{
        printf("%f\n", num2);
    }

    return 0;
}
