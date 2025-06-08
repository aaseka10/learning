#include<stdio.h>
 int fac(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
 
}
int main(){
    int n;
    printf("Enter the number of which you want factorial:");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial is not defined for negative numbers");
    }
    else{
        printf("The factorial of %d is %d\n",n,fac(n));
    }
    return 0;
}