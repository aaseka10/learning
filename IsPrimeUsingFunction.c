#include <stdio.h>
int prime(int n){
    int count = 0;
    if(n<=1){
        return 0;
    }
    for(int i=1; i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
        if(count==2){
        return 1;
        }
    return 0;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(prime(n)){
        printf("%d is prime number.",n);
    }
    else {printf("The number is not prime number.");
}
return 0;
}