#include<stdio.h> 
void display(int a[],int n) 
{ 
int i=0; 
   while(i<n) 
    { 
        printf("%d\t",a[i]); 
        i++; 
    } 
} 
int main() 
{ 
    int n;int i=0; 
    printf("Enter the size of an array\n"); 
    scanf("%d",&n); 
    int a[n]; 
    printf("Enter the elements\n"); 
   while(i<n) 
    { 
        scanf("%d",&a[i]); 
        i++; 
    } 
    printf("The array elements are :  \n "); 
    display(a,n); 
    return 0; 
}
