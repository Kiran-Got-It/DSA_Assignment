#include <stdio.h> 
 
int sumEven(int a[], int n) 
{ 
    int i = 0, sum = 0; 
    while(i < n) 
    { 
        if(a[i] % 2 == 0) 
            sum = sum + a[i]; 
        i++; 
    } 
    return sum; 
} 
 
int findMax(int a[], int n) 
{ 
    int i = 1, max = a[0]; 
    while(i < n) 
    { 
        if(a[i] > max) 
            max = a[i]; 
        i++; 
    } 
    return max; 
} 
 
int search(int a[], int n, int key) 
{ 
    int i = 0; 
    while(i < n) 
    { 
        if(a[i] == key) 
            return 1; 
        i++; 
    } 
    return 0; 
} 
 
void sortArray(int a[], int n) 
{ 
    int i = 0, j, temp; 
    while(i < n - 1) 
    { 
        j = i + 1; 
        while(j < n) 
        { 
            if(a[i] > a[j]) 
            { 
                temp = a[i]; 
                a[i] = a[j]; 
                a[j] = temp; 
            } 
            j++; 
        } 
        i++; 
    } 
} 
 
int main() 
{ 
    int a[50], n, i, key; 
    int sum, max, found; 
 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
 
    printf("Enter %d elements:\n", n); 
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]); 
 
    sum = sumEven(a, n); 
    max = findMax(a, n); 
 
    printf("\nSum of even numbers = %d", sum); 
    printf("\nMaximum element = %d", max); 
 
    printf("\nEnter element to search: "); 
    scanf("%d", &key); 
 
    found = search(a, n, key); 
    if(found == 1) 
        printf("Element found"); 
    else 
        printf("Element not found"); 
 
    sortArray(a, n); 
 
    printf("\nSorted array: "); 
    for(i = 0; i < n; i++) 
        printf("%d ", a[i]); 
 
    return 0; 
} 
 