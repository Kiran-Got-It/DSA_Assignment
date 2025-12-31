#include<stdio.h> 
int Hcf(int a,int b) 
{ 
    int hcf; 
    int i; 
   i=1; 
     
       while(i<=a&&i<=b) 
        { 
            if(a%i==0&&b%i==0) 
            { 
hcf=i; 
            } 
            i++; 
             
        } 
        return hcf; 
     
} 
int main() 
{ 
    printf("Enter the two numbers to find hcf\n"); 
    int a,b; 
    scanf("%d%d",&a,&b); 
    printf("The hcf is %d\t",Hcf(a,b)); 
    return 0;
}
