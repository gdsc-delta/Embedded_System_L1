#include <stdio.h>

int main()
{
    int password = 0000;
    int user_password = 5;

    printf("enter the password\n");
    scanf("%d", &password);
    //printf("%d",password);

    if(password == user_password){
        printf("password is true");
    }
    else{
        printf("\tpassword is wrong");
    }

    return 0;
}
