/*
  Given an array A of N integers. 
  Count the number of elements that have at least 1 elements greater than itself.
*/

#include <iostream>
#include <vector>

class Atleast1Greater{
public:
  Atleast1Greater(){}
  ~Atleast1Greater(){}
  int calculate_total_eligible_Element(std::vector<int> &x);
};

int Atleast1Greater::calculate_total_eligible_Element(std::vector<int> &x){
  int max = INT_MIN;
  for(auto i: x){
    if(i>max){
      max = i;
    }
  }
  int count=0;
  for(auto i:x){
    if(i != max){
      count++;
    }
  }
  return count;
}

int main(){
  Atleast1Greater *c = new Atleast1Greater();
  std::vector<int> vctr{5, 5, 5};
  std::cout << "Total elegible elements where atleast 1 elements greater than itself : " << c->calculate_total_eligible_Element(vctr) << std::endl;
  return 0;
}