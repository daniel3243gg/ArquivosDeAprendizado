#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>
using namespace std;

    typedef class data{
        int dia;
        int mes;
        int ano;
        public: 
            void setano(int ano1){
                 ano = ano1; 
            }
            void setmes (int mes1){
                mes = mes1;
            }
            void setdia (int dia1){
                dia = dia1;
            }
            int getano(){
                return ano;
            }
            int getdia(){
                return dia;
            }
            int getmes(){
                return mes;
            }
           

    }data;



class pessoa{
    private:
    string name;
    

    public:
    data nascimento;
        void setname(string name1){
            name = name1;
        }
        string getname(){
            return name; 
        }
        void getApito(){
            int idade = 2023- nascimento.getano();
            if (idade < 18){
                cout << "MENOR DE IDADE\n";
            }else{
                cout << "maior de idade\n";
            }   
        }
        void getsigno(){
            int dia = nascimento.getdia();
            int mes = nascimento.getmes();
               if ((dia >= 21 && mes == 3) || (dia <= 20 && mes == 4)) {
                cout << "SEU SIGNO É ÁRIES";
            } else if ((dia >= 21 && mes == 4) || (dia <= 20 && mes == 5)) {
                cout << "SEU SIGNO É TOURO";
            } else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6)) {
                cout << "SEU SIGNO É GÊMEOS";
            } else if ((dia >= 21 && mes == 6) || (dia <= 21 && mes == 7)) {
                cout << "SEU SIGNO É CÂNCER";
            } else if ((dia >= 22 && mes == 7) || (dia <= 22 && mes == 8)) {
                cout << "SEU SIGNO É LEÃO";
            } else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)) {
                cout << "SEU SIGNO É VIRGEM";
            } else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)) {
                cout << "SEU SIGNO É LIBRA";
            } else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)) {
                cout << "SEU SIGNO É ESCORPIÃO";
                }else if ((dia >= 21 && mes == 12) || (dia <= 22 && mes == 11)){
                    cout << "SEU SIGNO E DE SAGITARIO";
                }else if ((dia >= 22 && mes == 12) || (dia <= 21 && mes == 1)){
                        cout << "SEU SIGNO E DE CAPRICORNIO";
                }else if ((dia >= 21 && mes == 1) || (dia <= 18 && mes == 2)){
                        cout << "SEU SIGNO E DE AQUARIO";
                }else if ((dia >= 19 && mes == 2) || (dia <= 19 && mes == 3)){
                        cout << "seu signo e de peixes";
                }
        } 
};





int main (){
    int ano,dia,mes;
    string nome;
     pessoa pessoa1;
        cout << "NOME DA PESSOA: ";
        cin >> nome;
        cout << " ANO DE NASCIMENTO: ";
        cin >> ano;
        cout << " DIA DE NASCIMENTO: ";
        cin >> dia;
        cout << "MES: ";
        cin >> mes;
        pessoa1.nascimento.setano(ano);
        pessoa1.nascimento.setdia(dia);
        pessoa1.nascimento.setmes(mes);
        pessoa1.setname(nome);
        cout << pessoa1.getname 
        pessoa1.getApito(); 
        pessoa1.getsigno();




        system("pause");
    return 0;
}