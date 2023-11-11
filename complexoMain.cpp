#include <iostream>
#include "complexo.h"

using namespace std;


int main(){
    complexo n1 {10,20};
    complexo n2 {5,15};
    cout << "n1 = ";
    n1.print();
    cout << endl;

    cout << "n2 = ";
    n2.print();
    cout << endl;


    return 0;
};