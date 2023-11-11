#include <iostream>
using namespace std;
#define TAM 10
void Imprimevetor(int vetor[TAM]){
    int i;
    for(i=0; i < TAM; i++){
        cout << vetor[i] << " ";


    }



}
void InsertionSort(int vetor[TAM]){
    int atual,i,j;
    for(i = 1; i < TAM; i++){
    atual = vetor[i];
    j =  i - 1;
    while((j >=0)&&(atual < vetor[j])){
        vetor[j+1] = vetor[j];
        j = j - 1;
    }
    vetor[j+1] = atual;
    }

}
int main(){
    int vetor[TAM]{9,8,7,6,5,4,3,2,1};
    InsertionSort(vetor);
    Imprimevetor(vetor);





    return 0;
}