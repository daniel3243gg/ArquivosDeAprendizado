#include <stdio.h>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream Arquivo;
    Arquivo.open("Texto.txt", std::ios_base::app);
        Arquivo << "19287738723232"; 
        Arquivo << "   TESTE1";
    Arquivo.close();




    return 0;
}
