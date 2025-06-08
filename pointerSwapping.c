#include<stdio.h>
int swap( int *a, int *b){
    int temp = *a;
     *a=  *b;
     *b = temp;
    return 0;
}
int main(){
    int a,b;
    printf("Enter the number for a:");
    scanf("%d",&a);
    printf("Enter the number for b:");
    scanf("%d",&b);
    printf("The initial numbers is %d %d\n",a,b);
    int answer = swap(&a,&b);
    printf("The numbers after swapping is %d %d",a,b);
    return 0;
}