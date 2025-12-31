#include<stdio.h> 
int sum(int a) 
{ 
    int sum=0,rem; 
 while(a>0) 
 { 
   
    rem=a%10; 
    sum=sum+rem; 
    a=a/10; 
 } 
 
     
    return sum; 
} 
int main() 
{ 
    printf("The sum is %d\t",sum(123)); 
    return 0; 
}