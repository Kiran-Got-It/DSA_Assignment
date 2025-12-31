#include<stdio.h> 
 
void reverseArray(int a[], int n) { 
    int b[n]; 
    int i; 
 
    
    for(i = 0; i < n; i++) { 
        b[i] = a[n - 1 - i]; 
    } 
 
    for(i = 0; i < n; i++) { 
        a[i] = b[i]; 
    } 
} 
 
int main() { 
    int n, i; 
    printf("Enter the size: "); 
    scanf("%d", &n); 
 
    int a[n]; 
    printf("Enter the elements: \n"); 
    for(i = 0; i < n; i++) { 
        scanf("%d", &a[i]); 
    } 
 
   
    reverseArray(a, n); 
 
    printf("The reverse array is: \n"); 
    for(i = 0; i < n; i++) { 
        printf("%d\t", a[i]); 
    } 
    printf("\n"); 
 
    return 0; 
} 