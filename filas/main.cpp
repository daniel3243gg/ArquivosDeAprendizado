#include <iostream>
#include "funcf.h"
using namespace std;


int main(){
    int opcao, v1;
    filas fila1;
   cout << "BEM VINDO A FILAS\n";
   do{
    cout << "DESEJA ADICIONAR NA FILA [1]\n";
    cout << "DESEJA REMOVER DA FILA [2]\n";
    cout << "DESEJA IMPRIMIR A FILA [3]\n";
    cout << "DESEJA SAIR DO PROGAMA [0]\n";
    cin >> opcao;
    switch (opcao){
        case 1:
            cout << "DIGITE O VALOR A SER ADICIONADO";
            cin >> v1;
            fila1.inserir(v1);
                    break;
        case 2:
            fila1.retirar();
                    break;
        case 3:
            fila1.print();
                    break;
        default:
        cout << "OPCAO INVALIDA!!!!";
                    break;
    }




   }while(opcao != 0);



    return 0;
}