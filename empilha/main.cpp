#include <iostream>
#include "pilhas.h"
using namespace std; 


int main (){
int resp,valor;
Pilha pilha1; 
bool resp2 = false;
do {
cout << "\nDIGITE 0 PARA SAIR DO PROGAMA \n";
cout << "DIGITE 1 PARA EMPILHAR UM NUMERO \n";
cout << "DIGITE 2 PARA RETIRAR UM NUMERO \n";
cout << "DIGITE 3 PARA IMPRIMIR A PILHA\n ";
cin >> resp;
switch (resp) {
    case 1: 
    cout << "DIGITE O NUMERO QUE DESEJA EMPILHAR:";
    cin >> valor;
        pilha1.pilha_push(valor);
    cout << "VALOR ACRESCENTADO";
        break;
    case 2:
    cout << "\nVALOR REMOVIDO";
    pilha1.pilha_pop();
        break;
    case 3:
        pilha1.pilha_print();
            break;
    case 0:
        resp2 = true; 
            break;
}
}while(resp2 == false );


}