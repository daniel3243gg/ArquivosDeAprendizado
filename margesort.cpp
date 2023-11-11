#include <iostream>
using namespace std;
#define TAM 10

void imprimevetor(int vetor[TAM]){
    for (int i = 0; i < TAM; i++){
        cout << vetor[i] << " ";
    }

}
void merge(int vetor[TAM], int indiceEsquerdo, int meio, int indiceDireito){
    int i ,j,k;
    int n1 = meio - indiceEsquerdo + 1;
    int n2 = indiceDireito - meio;
    int vetoresquerdo[n1], vetordireito[n2];
    for(i = 0; i <n1; i++){
        vetoresquerdo[i] = vetor[indiceEsquerdo + i];
    }
    for (j = 0; j< n2; j++){
        vetordireito[j] = vetor[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = indiceEsquerdo;
    while(i < n1 && j < n2){
        if(vetoresquerdo[i] <= vetordireito[j]){
            vetor[k] = vetoresquerdo[i];
            i++;
        }else{
            vetor[k] = vetordireito[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        vetor[k] = vetoresquerdo[i];
        i++;
        k++;

    while(j < n2){
        vetor[k] = vetordireito[j];
        i++;
        k++;
    }
    }
}

void merge_sort(int vetor[TAM], int indiceEsquerdo,int indiceDIreito){
    if(indiceEsquerdo < indiceDIreito){
        int meio = indiceEsquerdo + (indiceDIreito - indiceEsquerdo)/2;
        merge_sort(vetor, indiceEsquerdo,meio);
        merge_sort(vetor, meio + 1, indiceDIreito);
        merge(vetor,indiceEsquerdo, meio, indiceDIreito);
    }

}



int main(){
    int vetor[TAM]{10,9,8,7,6,5,4,3,2,1};
    imprimevetor(vetor);
    merge_sort(vetor, 0,TAM -1);
    imprimevetor(vetor);


    return 0;
}