#include <iostream> 
#include "funcf.h"
using namespace std;

    filas::filas(){
        frente = 0;
        atras = 0;
       estrutura = new int[max_];

    }
    bool filas::estavazia(){

            return(frente == atras);

    }
    bool filas::estacheira(){

            return (atras - frente) >= max_;    }
    void filas::inserir(int item){
        if(estacheira()){
            cout << "A FILA JA ESTA CHEIRA ";
        }else{
            estrutura[atras % max_] = item;
            atras++;
           
        }


    }
    int filas::retirar(){
        if(estavazia()){
            cout << "JA ESTA VAZIA";
        }else{
            frente++;
           return estrutura[(frente-1) % max_];
        }
    }
    void filas::print(){
        cout << "{";
        for(int i=frente;i < atras; i++ ){
            cout <<estrutura[i] << " " ;
        }
        cout << "}";
            }

