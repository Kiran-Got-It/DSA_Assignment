#include<stdio.h> 
void display(int a[],int n) 
{ 
    int i,j; 
    int t; 
    for(i=0;i<n;i++) 
    { 
        for(j=i+1;j<n;j++) 
        { 
            if(a[i]>a[j]) 
            { 
                t=a[i]; 
                a[i]=a[j]; 
                a[j]=t; 
            } 
        } 
    } 
 
} 
int main() 
{ 
    printf("Enter the size of an array\n"); 
    int n,i; 
    scanf("%d",&n); 
    int a[n]; 
    printf("Enter the elements\n"); 
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&a[i]); 
    } 
    display(a,n); 
    printf("The sorted array is \n"); 
    for(i=0;i<n;i++) 
    { 
        printf("%d\t",a[i]); 
 
    } 
    return 0; 
}