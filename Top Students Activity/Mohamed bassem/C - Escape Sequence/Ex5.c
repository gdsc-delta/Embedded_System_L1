#include <stdio.h>

int pass = 1000;
int password;

int main()
{
    printf("enter password= ");
    scanf("%i", &password);

    if(pass != password){
        printf("password wrong \a");
    }
    else
    {
        printf("password true");
    }
    return 0;
}
