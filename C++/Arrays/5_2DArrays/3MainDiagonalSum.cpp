/*
You are given a N X N integer matrix. 
You have to find the sum of all the main diagonal elements of A.

Example Input
Input 1:

3 3 1 -2 -3 -4 5 -6 -7 -8 9
Input 2:

2 2 3 2 2 3


Example Output
Output 1:

 15 
Output 2:

 6 
*/

#include <iostream>
#include <vector>

class MainDiagonalSum{
  public:
    MainDiagonalSum(){}
    ~MainDiagonalSum(){}
    int solve(std::vector<std::vector<int>> &arr);
};

int MainDiagonalSum::solve(std::vector<std::vector<int>> &arr){
  int sum=0, i=0;
  while(i<arr.size()){
    sum += arr[i][i];
    i++;
  }
  return sum;
}

int main(){
  MainDiagonalSum *m = new MainDiagonalSum();
  std::vector<std::vector<int>> arr{{2, 2}, {3,2}};
  std::cout << "Sum of diagonal elements : " << m->solve(arr) << std::endl;
  return 0;
}