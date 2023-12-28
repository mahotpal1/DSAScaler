/*
You are given a n x n 2D matrix A representing an image.
Rotate the image by 90 degrees (clockwise).
You need to do this in place.

Note: If you end up using an additional array, you will only 
receive partial score.

Example Input
Input 1:
 [
    [1, 2],
    [3, 4]
 ]
Input 2:
 [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
 ]


Example Output
Output 1:
 [
    [3, 1],
    [4, 2]
 ]
Output 2:
 [
    [7, 4, 1],
    [8, 5, 2],
    [9, 6, 3]
 ]
*/

#include <iostream>
#include <vector>

class RotateBy90{
  public :
    RotateBy90(){}
    ~RotateBy90(){}
    std::vector<std::vector<int>> transpose(std::vector<std::vector<int>> &arr);
    std::vector<int> reverse(std::vector<int> &arr);
    std::vector<std::vector<int>> solve(std::vector<std::vector<int>> arr);
};

void swap(int *x, int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

std::vector<int> RotateBy90::reverse(std::vector<int> &arr){
  int start=0, end=arr.size()-1;
  while(start<end){
    swap(&arr[start],&arr[end]);
    start++;
    end--;
  }
  return arr;
}

std::vector<std::vector<int>> RotateBy90::transpose(std::vector<std::vector<int>> &arr){
  if(arr.size() != arr[0].size()){
    return {{}};
  }
  for(int i=0; i<arr.size(); i++){
    for(int j=i; j<arr[0].size(); j++){
      swap(&arr[i][j], &arr[j][i]);
    }
  }
  return arr;
}

std::vector<std::vector<int>> RotateBy90::solve(std::vector<std::vector<int>> arr){
  RotateBy90 *r = new RotateBy90();
  std::vector<std::vector<int>> new_arr{r->transpose(arr)};
  arr.clear();
  for(auto x: new_arr){
    arr.push_back(r->reverse(x));
  }
  return arr;
}

int main(){
  std::vector<std::vector<int>> arr{
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  RotateBy90 *r = new RotateBy90();

  std::cout << "After rotating by 90 degree elements in matrix are : " << std::endl;
  for(auto x: r->solve(arr)){
    for(auto y: x){
      std::cout << y << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}