#include <stdio.h> 
 
int searchElement(int arr[], int size, int target) { 
    for (int i = 0; i < size; i++) { 
        if (arr[i] == target) { 
            return 1;  
        } 
    } 
    return -1;  
} 
 
int main() { 
    int n, target, result; 
 
    printf("Enter the number of elements in the array: "); 
    scanf("%d", &n); 
 
    int arr[n]; 
    printf("Enter %d elements:\n", n); 
    for (int i = 0; i < n; i++) { 
        scanf("%d", &arr[i]); 
    } 
 
    printf("Enter the element to search for: "); 
    scanf("%d", &target); 
 
   
    result = searchElement(arr, n, target); 
 
    if (result != -1) { 
        printf("Element is present in the array\n" ); 
    } else { 
        printf("Elementis not present in the array.\n"); 
    } 
 
    return 0; 
} 
 