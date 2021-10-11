#include<stdio.h>  
 int main()    
{    
int a=10, b=20;      
printf("Before swapping a=%d b=%d",a,b);      
a=a+b;//a=3 (1+2)    
b=a-b;//b=1 (3-2)    
a=a-b;//a=2 (3-1)    
printf("\n After swapping a=%d b=%d",a,b);    
return 0;  
}
