#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#define TAM 10 
using namespace std;
int localizador(int numeroprocurado, int vetor[TAM] ){



    int direita = TAM -1;
    int esquerda = 0; 
    int meio;
while(esquerda <= direita){
    meio = (direita + esquerda)/ 2;
    if (numeroprocurado == vetor[meio]){
    return meio;
    


}
    if(vetor[meio] < numeroprocurado  ){
    esquerda = meio + 1;
    }else{ 
    direita = meio - 1; 
}
}
return -1;

}



int main (){
    int numeroprocurado, posicao = -1;
    int vetor[TAM]{1,2,3,4,5,6,7,8,9,10};
    for (int con = 0; con <= TAM; con++){
        cout << vetor[con] << " ";
    }
    cout << "QUAL NUMERO DESEJA PROCURAR?";
    cin >> numeroprocurado;
    
     posicao = localizador(numeroprocurado, vetor);
    
    if( posicao > 0){
        cout << "\nSEU NUMERO ESTA DENTRO DO VETOR!";
        cout << "\n SUA POSICAO É:" << posicao;
    }else {
        cout << "\nseu numero nao esta dentro do arrey!";
    }



        system("pause");
    return 0;
}