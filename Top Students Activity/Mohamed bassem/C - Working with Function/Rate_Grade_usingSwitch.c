#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
while (1)
{
    printf(" enter your grade=");
    scanf("%d", &i);

    switch (i)
    {
    case 85 ... 100:
        printf("Excellent\n");
        break;
    case 75 ... 84:
        printf(" very good\n");
        break;
    case 65 ... 74:
        printf(" good\n");
        break;
    case 50 ... 64:
        printf(" normal\n");
        break;
    case 0 ... 49:
        printf("failed\n");
        break;  
    default:
        printf(" unknown\n"); 
        break;
    }
    
}
return 0;

}