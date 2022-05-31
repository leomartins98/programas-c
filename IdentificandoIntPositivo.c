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
    
    int result = 1;
    for (int i = 0; i < 5; ++i) {
        if (vetor[i] <= 0){
            continue;
        }
        else if (vetor[i]==1){
        if (vetor[i + 1] - vetor[i] != 1){
            result = vetor[i]+1;
            break;
        }
        }
        else{
            if (vetor[i + 1] - vetor[i] != 1){
            result = vetor[i]+1;
            break;
    }
    }
    }
    printf("\nO proximo menor inteiro eh: %d", result);

    free(vetor);

}