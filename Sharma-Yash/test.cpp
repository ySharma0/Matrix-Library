#include <iostream>
#include "Sharma-Yash.h"

int main(){

    Matrix m(3,3);
    Matrix b(3,3);

    Matrix c(3,3);

    c = m * b;

    c.print();

    return 0;
}