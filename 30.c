#include <stdio.h> 
 
int sumEven(int a[], int n) 
{ 
    int sum = 0, i; 
    for(i = 0; i < n; i++) 
    { 
        if(a[i] % 2 == 0) 
            sum = sum + a[i]; 
    } 
    return sum; 
} 
 
int productOdd(int a[], int n) 
{ 
    int prod = 1, i; 
    for(i = 0; i < n; i++) 
    { 
        if(a[i] % 2 != 0) 
            prod = prod * a[i]; 
    } 
    return prod; 
} 
 
int main() 
{ 
    int a[50], n, i; 
    int sumEvenResult, productOddResult; 
 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
 
    printf("Enter %d elements:\n", n); 
    for(i = 0; i < n; i++) 
    { 
        scanf("%d", &a[i]); 
    } 
 
    sumEvenResult = sumEven(a, n); 
    productOddResult = productOdd(a, n); 
 
    printf("\nSum of even elements = %d", sumEvenResult); 
    printf("\nProduct of odd elements = %d", productOddResult); 
 
    return 0; 
}