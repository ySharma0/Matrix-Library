#include <iostream>

class Matrix{
    //unsigned because rows and collumns cannot be of negative value
   
  
     private:
        unsigned int cols;
        unsigned int rows;
        int** matrix;


    public:

        Matrix(int m, int n){

            rows = m;
            cols = n;
            //allocate a new array with m rows
            matrix = new int* [rows];

            for(int i = 0; i < rows; i++){
                
                //allocate n collumns
                *(matrix + i) = new int [cols];

                for(int j = 0; j < cols; j++){
                    //fills the matrix with 0s
                    *((matrix + i) + j) = 0;

                }
            }

        }

        //function for the transposing of a matrix
        Matrix transpose(Matrix matrix){

            Matrix transposed(matrix.rows, matrix.cols);

            for(int i = 0; i < matrix.rows; i++){
                for(int j = 0; j < matrix.cols; j++){

                    //migrates the values fron the original matrix to the transposed matrix
                    *(*(transposed.matrix + j) + i) = *(*(matrix.matrix + i) + j);

                }
            } 

            //std: :cout<<"hello world"<<std::endl;

            return transposed;
        }

        Matrix print(Matrix matrix){

            Matrix transposed(matrix.rows, matrix.cols);

            for(int i = 0; i < matrix.rows; i++){
                for(int j = 0; j < matrix.cols; j++){

                    //migrates the values fron the original matrix to the transposed matrix
                    std::cout<< (*(*(matrix.matrix + i) + j)) <<" ";

                }
                std::cout<<""<<std::endl;
            } 

            //std: :cout<<"hello world"<<std::endl;
        }

};



