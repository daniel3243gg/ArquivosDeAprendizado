#include <iostream>
#include "complexo.h"


using namespace std; 

    complexo::complexo(float r, float im){
        real = r;
        img = im;

    };
   void complexo::print(){
        cout << real << "+(" << img << ")i";
   };
    complexo complexo::add(complexo& par){
        float x = real + par.real;
        float y = img + par.img;
        return complexo {x,y};
    };
    complexo complexo::sub(complexo& par){
        float x = real - par.real;
        float y = img - par.img;
        return complexo {x,y};
    };

