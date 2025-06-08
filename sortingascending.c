#include<stdio.h>
int main()
{
    int n,t,i,j;
    printf("Enter the size of array :");
    scanf("%d",&n);
     int arr[n];
    for(int i = 0; i<n;i++){
            printf("Enter the %d element of array:",i);
            scanf("%d",&arr[i]);
    }
        for(int i = 0; i<n;i++){
            printf("%d ",arr[i]);
        }
        for(i=0; i<n; i++){
            for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
               t = arr[i];
               arr[i]=arr[j];
               arr[j]=t;
            }
        }
        }
          // Display the sorted array
    printf("\nAfter sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}