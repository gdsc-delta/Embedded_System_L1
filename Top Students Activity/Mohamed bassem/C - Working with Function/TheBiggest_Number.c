#include <stdio.h>
#include <stdlib.h>


int main()
{

    int f,s,t;
  while (1)
{
    
    printf("enter frist nmber=");
    scanf("%d",&f);

    printf("enter second nmber=");
    scanf("%d",&s);

    printf("enter third nmber=");
    scanf("%d",&t);
    if(f>s && f>t)
    {
        printf("frist number is greater\n");
        
    }
    else if(s>f && s>t)
    {
        printf("second number is greater\n");
        
    }
    else if(t>f && t>s)
    {
        printf("third number is greater\n");
        
    }
    }

    return 0;

}