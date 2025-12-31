include<stdio.h> 
int prime(int a) 
{ 
    int i,count=0; 
    for(i=1;i<=a;i++) 
    { 
        if(a%i==0) 
        { 
            count++; 
        } 
    } 
    if(count==2) 
    { 
        return 1; 
    } 
    else 
    { 
        return 0; 
    } 
} 
int main() 
{ 
 
    int a; 
    printf("Enter the number\n"); 
    scanf("%d",&a); 
    if(prime(a)==1) 
    { 
        printf("It is prime\n"); 
 
    } 
    else 
    { 
        printf("Not prime\n"); 
    } 
    return 0; 
} 
