#include <stdio.h>
#include <stdlib.h>

int main()
{

    
    for(int i=0;i<8;++i)
    {
        printf("\n");
        
        for(int j=0;j<i;++j)
        {
            printf("*");
        }
    }
    
    return 0;
}
