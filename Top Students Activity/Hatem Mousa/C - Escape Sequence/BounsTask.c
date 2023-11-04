#include <stdio.h>

int password = 0;
int user_password = 0000;


int main(){
    printf("Enter the password \n");
    scanf("%i", &user_password);


    if(password != user_password){
        printf("\t");
        printf("\aPassword Wrong");
    } else {
        printf("Password is true");
    }


    return 0;
}