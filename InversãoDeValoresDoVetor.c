#include <stdio.h>
#include <stdlib.h>


void invert(int v [], int ini, int fim){

    int aux;
    if(ini < fim){
        aux = v[ini];
        v[ini] = v[fim];
        v[fim] = aux;
        invert(v, ini + 1, fim -1);

    }

}


void imprimir(int v[], int tam){

    if(tam == 1)
        printf("%d,", v[tam -1]);
    else{
        imprimir(v, tam - 1);
        printf("%d,", v[tam -1]);
    }
}


int main (){


    int vet[10] = {100, 200, 13, 14, 15, 16, 17, 18, 19, 20};

    imprimir(vet, 10);
    invert(vet, 0 ,9);
    printf("\n");
    imprimir(vet, 10);

return 0;


}
