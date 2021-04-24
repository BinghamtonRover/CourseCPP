#include <iostream>
#include <vector>

typedef std::vector<std::vector<int>> Matrix;

//void print_matrix(std::vector<std::vector<int>> &m){
void print_matrix(Matrix &m){
    for(int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[i].size(); j++){
            std::cout << m[i][j];
            if(j != m[i].size()-1){
                std::cout << ", "; 
            }             
        }
        std::cout << std::endl;
    }
}

int main(){
    Matrix m;
    m.resize(5);
    for(int i = 0; i < m.size(); i++){
        m[i].resize(3);
    }
    print_matrix(m);
}