#include <iostream>

class Matrix{
    //unsigned because rows and collumns cannot be of negative value
   
  
     public:
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
                std::cout<<std::endl;
                //allocate n collumns
                *(matrix + i) = new int [cols];

                for(int j = 0; j < cols; j++){
                    //fills the matrix with 0s
                    *(*(matrix + i) + j) = 0;
                   

                }
            }

        }

        //function for the transposing of a matrix
        Matrix transpose(){

            Matrix transposed(rows, cols);

            for(int i = 0; i < rows; i++){
                for(int j = 0; j < cols; j++){

                    //migrates the values from the original matrix to the transposed matrix
                    *(*(transposed.matrix + j) + i) = *(*(matrix + i) + j);

                }
            } 

            //std: :cout<<"hello world"<<std::endl;

            return transposed;
        }

        void print(){

            

            for(int i = 0; i < rows; i++){
                for(int j = 0; j < cols; j++){

                    //prints the values from the original matrix 
                    std::cout<< *(*(matrix + i) + j) <<" ";

                }
                std::cout<<std::endl;
            } 
        }

};





