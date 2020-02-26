#include <iostream>
#include "Sharma-Yash.h"

int main(){

    Matrix mat(3, 3);
    Matrix mat2(3, 3);

    mat = mat.transpose();
    mat.print();

    return 0;
}