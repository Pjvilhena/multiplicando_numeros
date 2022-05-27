#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int n1, n2, n3, x;
    printf("Escreva 3 números\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    printf("Eles multiplicados é %d\n", x= n1* n2* n3);
    system("pause");
    system("cls");
}    