#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Digite o valor de A!\n");
    scanf("%d",&a);
    printf("Digite o valor de B!\n");
    scanf("%d",&b);
    while(a < b){
        printf("O valor e %d \n", a);
        a --;
    }
}
