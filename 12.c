#include <stdio.h> 
 
int* countEvenOdd(int a[], int n) 
{ 
    static int c[2];   // c[0] = even, c[1] = odd , must be static local variable is unsafe to return as a pointer 
    int i; 
 
    c[0] = 0; 
    c[1] = 0; 
 
    for (i = 0; i < n; i++) 
    { 
        if (a[i] % 2 == 0) 
            c[0]++; 
        else 
            c[1]++; 
    } 
 
    return c;   
} 
 
int main() 
{ 
    int a[10], n, i; 
    int *p; 
 
    printf("Enter n: "); 
    scanf("%d", &n); 
 
    for (i = 0; i < n; i++) 
        scanf("%d", &a[i]); 
 
    p = countEvenOdd(a, n); 
 
    printf("Even = %d\n", p[0]); 
    printf("Odd  = %d\n", p[1]); 
 
    return 0; 
} 