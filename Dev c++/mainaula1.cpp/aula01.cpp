 #include "aula01cabe.h"
 #include "iostream"
 using namespace std;

 Complexo::Complexo(float r,float im){
    real = r;
    img = im;
    };

    void Complexo::print(){
        cout << "real:" << real << " " << "imaginario:" << img;

    };
    Complexo Complexo::add(Complexo& par){
        float x = real + par.real;
        float y = img + par.img;
        return Complexo{x,y};
    };
    Complexo Complexo::sub(Complexo& par){
        float x = real - par.real;
        float y = img - par.img;
        return Complexo{x,y};

    };
