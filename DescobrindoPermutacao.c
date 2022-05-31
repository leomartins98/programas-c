#include <stdio.h>
#include <stdlib.h>

void sortVector(int *vector, int n){
    for (int i = 0; i < n; ++i){
        for (int j = i + 1; j < n; ++j){
            if (vector[i] > vector[j]){
                int aux = vector[j];
                vector[j] = vector[i];
                vector[i] = aux;
            }
        }
    }
}


int main(){
    int VECTOR_SIZE_MAX = 5;
    int* vetor = (int*)malloc(sizeof(int) * VECTOR_SIZE_MAX);

    printf("Digite 5 numeros: \n");
    for (int i = 0; i < VECTOR_SIZE_MAX; ++i){
        int a;
        scanf("%d", &a);
        vetor[i] = a;
    }

    sortVector(vetor, VECTOR_SIZE_MAX);
    int j = vetor[0];
    int k;

    for (int i=0;i<VECTOR_SIZE_MAX;i++){
    
    if (vetor[i]!=j){
        k=1;
        break;
    }
    else {
    j++;
    }
    }

if (k==1){
    printf("Nao eh permutacao!");
}
else {
    printf ("Eh permutacao");
}


    printf("\n");

    free(vetor);
}