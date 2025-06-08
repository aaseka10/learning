#include<stdio.h>
int main()
{ 
    for(int i=5;i>0;i--){
        for(int j=5;j>=6-i ;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
/*
54321
5432
543
54
5*/