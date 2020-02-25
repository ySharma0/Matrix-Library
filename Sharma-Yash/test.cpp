#include <iostream>
#include "Sharma-Yash.h"

int main(){

    Matrix matrix(3, 2);
    Matrix matrix2(2,3);

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 3; j++){

          //  *(*(matrix.matrix + i) + j) = j;
         //   *(*(matrix2.matrix + j) + i) = j;

        }

    }

    matrix.print();
    matrix2.print();

    Matrix matrix3(3,3);
    matrix3 = matrix.multiply(matrix2);

    matrix3.print();


    return 0;
}