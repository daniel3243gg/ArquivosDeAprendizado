#include <iostream>
#include <string>
using namespace std;

class Pessoa{
private:
    string nome, nomeM, NomeP;
    int idade, filhos, Qntfilhos = 0;

public:
Pessoa(){
nome = "";
nomeM = "";
NomeP = "";
idade = 0;
filhos = 0;
};
 void Print(){
 };
 void setnome(string name){
    nome = name;
 };
 void setnomeM(string nameM){
    nomeM = nameM;
 };
 void setnomeP(string nameP){
    NomeP = nameP;
 };
 void setidade(int ydade){
    idade= ydade;

 };
 void setfilhos (int fylhos){
     Qntfilhos += fylhos;
    filhos = fylhos;
 };
string getnome(){


    return nome;
};
 string getnomeM(){
    return nomeM;
 };
 string getnomeP(){
    return NomeP;
 };
 int getidade(){
    return idade;
 };
 int getfilhos (){
    return filhos;
 };
 int getqntfilhos(){
    return Qntfilhos;
 }

};
void Impressaodepessoas(int qual,Pessoa pessoa[]){

                            cout << "\n NOME: " << pessoa[qual].getnome() << endl;
                            cout << "NOME DA MAE: " << pessoa[qual].getnomeM()<< endl;
                            cout << "NOME DO PAI: " << pessoa[qual].getnomeP() << endl;
                            cout << "IDADE:" << pessoa[qual].getidade() << endl;
                            cout << "QUANTIDADE DE FILHOS: " << pessoa[qual].getqntfilhos()<<endl;
                            cout << "---------------------------------------------------------------------------\n";

};
void removerpessoas(int qual, Pessoa pessoa[]){
    cout << "DESEJA REMOVER QUAL PESSOA?" << endl;
    cout << "[" << qual << "]"<< pessoa[qual].getnome() << endl;


};
int main (){
    cout << "Bem vindo AO REGISTRO DE PESSOAS! "  ;
    cout << "-------------------------------------  \n";
int fecha = 0;
Pessoa pessoa[10];
int rodadas = 0;
int qntpessoas = 0;
int filhosreal = 0;

while(fecha == 0){
        rodadas = rodadas + 1;
        cout << "[1]ADICIONAR PESSOA\n";
        cout << "[2] VE PESSOAS\n";
        cout << "[3] FECHA O PROGAMA \n";
        cout << "[4] REMOVER \n";
        int escolha;
        cin >> escolha;
            switch(escolha){
                    case 1:
                            {

                         string nome, nomeM, NomeP;
                          int idade, filhos;
                        cout << "\n --------------------------------------------------------\n";
                        cout << "DIGITE O NOME DA PESSOA: ";
                        cin >> nome;
                        pessoa[qntpessoas].setnome(nome);
                        cout << "\nDIGITE O NOME DA MAE DA PESSOA: ";
                        cin >> nomeM;
                        pessoa[qntpessoas].setnomeM(nomeM);
                        cout <<"\nDIGITE O NOME DO PAI DA PESSOA: ";
                        cin >> NomeP;
                        pessoa[qntpessoas].setnomeP(NomeP);
                        cout << "\nDIGITE A IDADE DA PESSOA: ";
                        cin >> idade;
                        pessoa[qntpessoas].setidade(idade);
                        cout << "\nDIGITE A QUANTIDADE DE FILHOS DA PESSOA: ";
                        cin >> filhos;
                        pessoa[qntpessoas].setfilhos(filhos);
                        filhosreal = filhosreal + filhos;
                         qntpessoas =  qntpessoas + 1;
                            }
                        break;

                    case 2:
                        {
                        system("cls");
                        for(int i=0 ;i < qntpessoas;i++){
                           Impressaodepessoas(i ,pessoa);
                        };
                        cout << "QUANTIDADE DE FILHOS TOTAL:" << filhosreal << endl;
                        }

                            break;
;
                    case 3:
                        {
                          fecha = 1;
                        }
                            break;
                    case 4:
                        {
                        for(int i=0; i<qntpessoas; i++){
                            removerpessoas(i, pessoa);
                        };
                        int escolha90;
                        cin >> escolha90;
                        pessoa[escolha90] = pessoa[escolha90+1];
                        qntpessoas = qntpessoas - 1;
                        }
                                                    break;
    }

}

    return 0;
};
