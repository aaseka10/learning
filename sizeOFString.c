#include<stdio.h>
#include<stdio.h>
int main (){
    char str[40];
    puts("Enter the string");
    scanf("%s",str);
    puts("The size of str is :");//automatically \n by puts char
    int size=0;
    int k =0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    //printf("%d",size);
    for(int i= 0,j=size-1;i<=j;i++,j--){
        char temp= str[i];
        str[i]= str[j];
        str[j]=temp;
    }
    puts("The reverse string is : ");
    puts(str);
    return 0;
}