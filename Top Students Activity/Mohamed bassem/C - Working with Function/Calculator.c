#include <stdio.h>
#include <stdlib.h>

   int n1 =0 ;
    int n2 =0 ;
    char pr ;
void main ()
{

while (1)
{

    printf("enter first number=\n");

    scanf("%i",&n1);

    printf("enter second number=\n");

    scanf("%i",&n2);

    printf("enter Arithmetic process\n");

    scanf(" %c",&pr);
    

    switch(pr)
    {

        case '+':
        printf("sum=%d\n",n1+n2);
            
            break;

        case '-':
        printf("Subtraction=%d\n",n1-n2);
            
            break;

        case '*':
        printf("multiply=%d\n",n1*n2);
            
            break;

        case '/':
        if (n1>n2)
    {
        printf("Divi=%i\n",n1/n2);
            
            break;

    }
    else
    {
        printf("Divi=%i\n",n2/n1);
            
            break;

    }
        default:
            printf("Wrong operation\n");
            break;
        
    }

    
    

}

    return 0;
}