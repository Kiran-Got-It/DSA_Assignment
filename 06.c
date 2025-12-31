#include<stdio.h> 
void display(int a[],int n) 
{ 
int i; 
    for(i=0;i<n;i++) 
    { 
        printf("%d\t",a[i]); 
    } 
} 
int main() 
{ 
    int n;int i; 
    printf("Enter the size of an array\n"); 
    scanf("%d",&n); 
    int a[n]; 
    printf("Enter the elements\n"); 
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&a[i]); 
    } 
    printf("The array elements are :  \n "); 
    display(a,n); 
    return 0; 
} 
