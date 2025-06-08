#include <stdio.h>
int main (){
    int n,m,sum=0;
    printf("Enter how many element you want in an array:");
    scanf("%d",&n);
    int arr[n];
    int  *ptr;
    ptr= arr;
    m= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<m;i++){
        printf("Enter the element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<m;i++){
        sum+= *ptr;
        ptr++ ;
    }
    printf("The sum of available array is %d",sum);
    
    return 0;
}