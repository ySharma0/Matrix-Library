#include <iostream>
#include "Sharma-Yash.h"

int main(){

    Matrix matrix(5, 5);

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 5; j++){

            *(*(matrix.matrix + i) + j) = j;

        }

    }
    matrix.print();


    return 0;
}