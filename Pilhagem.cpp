#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define TAM 10
using namespace std;
void pilha_construtor(int *pilha, int *topo){
    *topo = -1;

    for(int con = 0; con < TAM; con++){
        pilha[con] = 0;
    }
}
bool pilha_lotada(int topo){
    if(topo == TAM -1){
        return true;
    }else{
        return false;
    }

}
bool pilha_vazia(int topo){
    if(topo == -1){
        return true;
    }else{
        return false;
    }
}
void pilha_push(int *pilha,int valor,int *topo){
    if(pilha_lotada(*topo)){
        cout << "A PILHA ESTA CHEIRA ";
    }else{
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }

}
void pilha_pop(int pilha[TAM], int *topo){
    if(pilha_vazia(*topo)){
        cout << "A PILHA ESTA VAZIA ";
    }else{
        pilha[*topo] = 0;
        *topo = *topo - 1; 
    }
}
void pilha_print(int pilha[TAM]){
    for(int con = 0; con < TAM ; con++){
        cout << pilha[con] << " ";
    }
    cout << "\n";

}

int main (){ 
    int pilha[TAM];
    int topo = -1; 
    int valorRetirado;
    pilha_construtor(pilha, &topo);
    for(int con = 0;con < TAM; con++ ){
        pilha_push(pilha,con,&topo);
        pilha_print(pilha);

    }
    cout << "\n";
    cout << "\n";
    int con = 0;
    while (con <4)
    {
         pilha_pop(pilha,&topo);
        pilha_print(pilha);
        con++;

    }
    

    


        system("pause"); 
    return 0;
}