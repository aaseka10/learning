#include<stdio.h>
int main (){
    for(int i=5; i>0; i-- ){
        for(int j=i+0 ;j>0;j-- ){
            printf("%d",j);
        }
            printf("\n");
    }
    return 0;
}
/* output
54321
4321
321
21
1*/