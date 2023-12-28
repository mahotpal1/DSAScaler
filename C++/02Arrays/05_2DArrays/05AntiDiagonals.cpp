/*
Give a N * N square matrix A, return an array of its anti-diagonals. 
Look at the example for more details.

Example Input
Input 1:
1 2 3
4 5 6
7 8 9
Input 2:
1 2
3 4

Example Output
Output 1:
1 0 0
2 4 0
3 5 7
6 8 0
9 0 0
Output 2:
1 0
2 3
4 0
*/

#include <iostream>
#include <vector>

class AntiDiagonals{
  public : 
    AntiDiagonals(){}
    ~AntiDiagonals(){}
    std::vector<std::vector<int>> solve(std::vector<std::vector<int>> &arr);
};

std::vector<std::vector<int>> AntiDiagonals::solve(std::vector<std::vector<int>> &arr){
  int n=arr.size(), m=arr[0].size();
  std::vector<std::vector<int>> ans;//(2*arr.size()-1, std::vector<int> (arr[0].size(), 0));
  for(int i=0;i<m;i++){
    int r=0, c=i;
    std::vector<int> tmp(n, 0);
    while(r<n && c>=0){
      tmp[r] = arr[r][c];
      r++;c--;
    }
    ans.push_back(tmp);
    tmp.clear();
  }
  for(int i=1; i<m; i++){
    int r=i, c=m-1, k=0;
    std::vector<int> tmp(n, 0);
    while(r<n && c>=0){
      tmp[k] = arr[r][c];
      r++; c--; k++;
    }
    ans.push_back(tmp);
    tmp.clear();
  }
  return ans;
}

int main(){
  AntiDiagonals *a = new AntiDiagonals();
  std::cout << "The 2d Array of diagonal elements : " << std::endl;
  std::vector<std::vector<int>> arr{
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  for(auto x: a->solve(arr)){
    for(auto y: x){
      std::cout << y << " ";
    }
    std::cout << std::endl;
  } 
  return 0;
}