#include <iostream>
using namespace std;
#define TAM 10
void imprimevetor(int vetor[TAM]){
    for(int i = 0; i < TAM; i++){
        cout << vetor[i] << " ";
    }
}

void quicksort(int vetor[TAM], int inicio, int fim){
    int pivo,meio,esq,dir,aux;
    esq = inicio;
    dir = fim;
    meio = (int) ((esq + dir)/2);
    pivo = vetor[meio];
    while(dir > esq){
        while(vetor[esq] < pivo){
            esq = esq +1;
        }
        while(vetor[dir] > pivo){
            dir = dir -1;
        }
        if (esq <= dir){ 
            aux = vetor [esq];
            vetor [esq] = vetor [dir];
            vetor [dir] = aux;

            esq = esq + 1;
            dir = dir - 1;
        }


    }



}

int main(){
    int vetor[10]{9,8,7,6,5,4,3,2,1};
    quicksort(vetor, 0, TAM);
    imprimevetor(vetor);






    return 0;
}