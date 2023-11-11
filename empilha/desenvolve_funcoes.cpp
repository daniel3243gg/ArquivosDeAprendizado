#include <iostream>
#include "Pilhas.h"
using namespace std;

Pilha::Pilha(){
        estrutura = new int [Pilha::max];
        tamanho = 0; 
    }
bool Pilha::pilha_vazia (){
        if(tamanho == 0){
            return true;
        }else{
            return false;
        }
    }
bool Pilha::pilha_lotada(){
        if(tamanho == Pilha::max -1){
            return true;
        }else{
            return false;
        }
    }
void Pilha::pilha_push (int valor){
    if(pilha_lotada()){
        cout << "A PILHA ESTA LOTADA";
    }else{
       estrutura[tamanho] = valor;
        tamanho++;
    }
    }
void Pilha::pilha_pop(){
    if(pilha_vazia()){
        cout << "A PILHA JA ESTA VAZIA";

    }else{
        estrutura[tamanho] = 0;
        tamanho--;
    }
    }
void Pilha::pilha_print(){
    cout << "[";
    for(int con = 0; con < tamanho; con++){
        cout << estrutura[con] << " ";        
    }
    cout << "]";
    }