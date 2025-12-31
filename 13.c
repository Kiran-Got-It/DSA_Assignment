#include <stdio.h> 
 
int* count(int a[], int n) 
{ 
    static int c[3];   
    int i; 
 
    c[0] = 0; 
    c[1] = 0; 
   c[2]=0; 
    for (i = 0; i < n; i++) 
    { 
        if (a[i] <0) 
            c[0]++; 
        else if(a[i]>0) 
            c[1]++; 
            else 
            c[2]++; 
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
 
    p = count(a, n); 
 
    printf("negative = %d\n", p[0]); 
    printf("positive = %d\n", p[1]); 
    printf("Zero = %d\n",p[2]); 
 
    return 0; 
} 