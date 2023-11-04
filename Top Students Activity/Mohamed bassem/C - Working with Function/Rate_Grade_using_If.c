#include <stdio.h>
#include <stdlib.h>

 int main()
{
    int g=0;

    while (1)
    {
      
    
    
    printf("enter your grad=");

    scanf(" %i",&g);

    if(85<=g &&g<=100)
    {
        printf("excellent\n");
        
    }
     else if (85>g && g>=75)
      {
        printf(" Very good\n");
        
    }
     else if (75>g && g>=65)
      {
        printf(" Good\n");
        
    }
     else if (65>g && g>=50)
      {
        printf(" normal\n"); 
              
    }
     else if (50>g && g>=0)
    {
      printf(" faild\n");
       
    }
    }
    return 0;
 
}