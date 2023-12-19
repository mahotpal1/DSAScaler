#include <iostream>
#include <vector>

class Reverse{
public:
  Reverse(){}
  ~Reverse(){}
  std::vector<int> solve(std::vector<int> &arr);
};

std::vector<int> Reverse::solve(std::vector<int> &arr){
  int start=0, end=arr.size()-1;

  while(start<end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }

  return arr;
}

int main(){
  Reverse *s = new Reverse();
  std::vector<int> arr{1, 2, 3, 2, 1};
  std::cout << "Reverse of [1, 2, 3, 2, 1] : " << std::endl;
  for(auto x: s->solve(arr)){
    std::cout << x << " ";
  }
  std::vector<int> arr1{1, 1, 10};
  std::cout << "\nReverse of [1, 1, 10] : " << std::endl;
  for(auto x: s->solve(arr1)){
    std::cout << x << " ";
  }
  return 0;
}