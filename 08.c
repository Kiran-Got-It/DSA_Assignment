#include<stdio.h> 
int sum(int a[],int n) 
 
{ 
    int i,s=0; 
    for(i=0;i<n;i++) 
    { 
        s=s+a[i]; 
    } 
    return s; 
} 
int main() 
{ 
  
   printf("enter the size of an array\n"); 
int n; 
scanf("%d",&n); 
int a[n],i; 
printf("Enter the  elements\n"); 
for(i=0;i<n;i++) 
{ 
    scanf("%d",&a[i]); 
} 
int s; 
s=sum(a,n); 
printf("The sum is %d\t",s); 
return 0; 
 
} 
