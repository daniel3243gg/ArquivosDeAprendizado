#include <stdio.h>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream Arquivo;
    Arquivo.open("Texto.txt", std::ios_base::app);
        Arquivo << "19287738723232"; 
        Arquivo << "   CARLOS E GAY O GUSTAVO É FALSO É O FERNANDO NAO É IGUAL NA WEB";
    Arquivo.close();




    return 0;
}