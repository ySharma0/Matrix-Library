#include <iostream>
#include "Sharma-Yash.h"

int main(){

    Matrix m(4,3);
    Matrix b(3,4);

    Matrix c(3,3);

    int **matrix = m.getMatrix();
    for(int i = 0; i < m.getRows(); i++){

        for(int j = 0; j < m.getCols(); j++){
            *(*(matrix+i)+j) = i*(j+1);
        }

    }
    m.print();
    b.print();

    c = m * b;

    c.print();

    return 0;
}