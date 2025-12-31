#include<stdio.h> 
float average(int a[],int n) 
{ 
    int i; 
    int s=0; 
    for(i=0;i<n;i++) 
    { 
        s=s+a[i]; 
    } 
    float ave; 
    ave=(float)s/n; 
    return ave; 
} 
int main() 
{ 
    printf("Enter the size of the array\n"); 
    int n; 
    scanf("%d",&n); 
    int a[n],i; 
    printf("Enter  the elements\n"); 
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&a[i]); 
 
    } 
    printf("The average is %f\n",average(a,n)); 
    return 0; 
}