
#include<stdio.h> 
int power(int a,int n) 
{ 
    if(n==0) 
    { 
        return 1; 
    } 
    else 
    { 
    int i; 
    int p=1; 
    for(i=1;i<=n;i++) 
    { 
 
p=p*a; 
    } 
    return p; 
} 
} 
int main() 
{ 
    int a,n; 
    printf("Enter the base and power\n"); 
    scanf("%d%d",&a,&n); 
    printf("The sm is %d\t",power(a,n)); 
    return 0;} 
