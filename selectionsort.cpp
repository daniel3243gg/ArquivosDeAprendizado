#include <iostream>
using namespace std;
#define TAM 10
void imprimevetor(int vetor[TAM]){
    for (int i = 0; i< TAM; i++){
        cout << vetor[i] << " ";
    }
}
void selectionsort (int vetor[TAM]){
    int aux, numeromenor;
    for (int i=0;i < TAM; i++ ){
        numeromenor = i;
        for (int j= i+1; j < TAM; j++){
            if(vetor[j] < vetor[numeromenor]){
               aux = vetor[numeromenor];
               vetor[numeromenor] = vetor[j];
                vetor[j] = aux;
                
            }
        }
    }
}

int main (){
    int vetor[10]{9,8,7,6,5,4,3,2,1};
    selectionsort(vetor);
    imprimevetor(vetor);


        return 0;
}