/*
You are given two matrices A and B of equal dimensions and you have 
to check whether two matrices are equal or not.

Input 1:

A = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]
B = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]
Input 2:

A = [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]
B = [[1, 2, 3],
     [7, 8, 9],
     [4, 5, 6]]


Example Output
Output 1:

Yes
Output 2:

No
*/
#include <iostream>
#include <vector>

class MatrixEquality{
  public : 
    MatrixEquality(){}
    ~MatrixEquality(){}
    bool solve(std::vector<std::vector<int>> &arr1, std::vector<std::vector<int>> &arr2);
};

bool MatrixEquality::solve(std::vector<std::vector<int>> &arr1, std::vector<std::vector<int>> &arr2){
  if(arr1.size()!=arr2.size() || arr1[0].size() != arr2[0].size()){
     return false;
  }
  for(int i=0; i<arr1.size(); i++){
     for(int j=0; j<arr1[0].size(); j++){
          if(arr1[i][j] != arr2[i][j]){
               return false;
          }
     }
  }
  return true;
}

int main(){
     MatrixEquality *m = new MatrixEquality();
     std::vector<std::vector<int>> arr1{
     {1, 2, 3},
     {4, 5, 6},
     {7, 8, 9}
     };
     std::vector<std::vector<int>> arr2{
     {1, 2, 3},
     {4, 5, 6},
     {7, 8}
     };

     std::cout << (m->solve(arr1, arr2)?"Yes":"No") << std::endl;
     return 0;
}