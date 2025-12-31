#include<stdio.h> 
int sum(int a[],int n) 
 
{ 
    int i=0,s=0; 
   while(i<n)
    { 
        s=s+a[i]; 
        i++;
    } 
    return s; 
} 
int main() 
{ 
  
   printf("enter the size of an array\n"); 
int n; 
scanf("%d",&n); 
int a[n],i=0; 
printf("Enter the  elements\n"); 
while(i<n)
{ 
    scanf("%d",&a[i]); 
    i++;
} 
int s; 
s=sum(a,n); 
printf("The sum is %d\t",s); 
return 0; 
 
} 
