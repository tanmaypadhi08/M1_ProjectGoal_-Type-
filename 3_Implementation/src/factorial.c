#include<stdio.h>
int factorial(int a)
{
    int i,fact=1;
 
   
    if (a<0) //checking for negative value
    {
        printf("\nPlease enter a positive number to");
        return 0;
                  
    } 
    
    for(i=1;i<=a;i++)
    fact=fact*i;
   
    
    return fact; 
}
