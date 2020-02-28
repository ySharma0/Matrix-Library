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

     for(int i = 0; i < c.getRows ; i++){
                //std::cout<<i;
                delete c.getMatrix()[i]; 
            }
            delete c.getMatrix();


    
    c = m.multiply(b);

    c.print();
   


    return 0;
}