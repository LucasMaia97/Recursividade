#include <stdio.h>
#include <stdlib.h>

void bin(int n, int *vet, int id){
    if(n == 0){
        printf("%d", n);
        vet[id] = n;
    }
    else{
        bin(n/2, vet, id - 1);
        printf("%d", n % 2); //0100
        vet[id] = n % 2;
    }
}

int main () {

    int n, vet[50];

    printf("Digite um valor decimal: ");
    scanf("%d",&n);

    bin(n, vet, 49);

    return 0;
}
