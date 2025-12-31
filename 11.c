#include<stdio.h> 
int sum(int a[],int n) 
{ 
    int s=0,i; 
    i=0; 
    while(i<n) 
    { 
        if(a[i]%3==0) 
        { 
            s=s+a[i]; 
        } 
  i++;  } 
  return s; 
} 
int main() 
{ 
    printf("Enter the sizr of an array\n"); 
    int n; 
    scanf("%d",&n); 
    int a[n],i=0; 
    printf("Enter  the elements \n"); 
    while(i<n) 
    { 
        scanf("%d",&a[i]); 
        i++; 
    } 
    printf("The sum is %d\n",sum(a,n)); 
    return 0; 
}