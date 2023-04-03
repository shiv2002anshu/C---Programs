#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);  
  printf("\nFactorials are : ");  
    for(i=1;i<=number;i++){    
      fact=fact*i;    
      printf("%d\t",i);
  }    
  printf("\n\nFactorial of %d is: %d",number,fact);    
return 0;  
}   