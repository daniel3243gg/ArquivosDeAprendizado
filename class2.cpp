#include "Classes2.h"
#include <iostream>
using namespace std;


    Data::Data(int dd,int mm,int ann){
        dia = 0;
        mes = 0;
        ano = 0;
    };
    int Data::getdia(){
        return dia;
    };
    int Data::getano(){
        return ano;
    };
    int Data::getmes(){
        return mes;
    };
    void Data::setdata(int d, int m, int n){
        dia = d;
        mes = m;
        ano = n;
    };
    void Data::imprime(){
        cout << "A DATA É " << dia << "/ " << mes << "/" << ano;
    };
