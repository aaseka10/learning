#include <stdio.h>
int main ()
{
    for(int i=0; i<5;i++){
        for(int j=i+1; j<=5;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
/* OUTPUT
12345
2345
345
45
5*/