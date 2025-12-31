#include<stdio.h> 
int display(int a[],int n) 
{ 
    int i,g; 
    g=a[0]; 
    for(i=0;i<n;i++) 
    { 
        if(a[i]>g) 
        { 
            g=a[i]; 
        } 
    } 
    return g; 
} 
int main() 
{ 
    printf("Enter the size\n"); 
    int n,i; 
    scanf("%d",&n); 
    int a[n]; 
    printf("enter the elements\n"); 
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&a[i]); 
    } 
    int result=display(a,n); 
     
    printf("The maximum element is %d\n",result); 
    return 0; 
    } 