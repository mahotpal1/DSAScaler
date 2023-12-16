/*
Given an integer A, you need to find the count of it's factors.

Factor of a number is the number which divides it perfectly leaving no remainder.

Example : 1, 2, 3, 6 are factors of 6

Problem Constraints
1 <= A <= 109

Input Format
First and only argument is an integer A.

Output Format
Return the count of factors of A.

*/
#include <iostream>
#include <math.h>
#include "Solution.h"

class CountFactors_2 : public Solution
{
public : 
  CountFactors_2(){};
  int _countFactors(int _nums);
  ~CountFactors_2(){};
};

int CountFactors_2::_countFactors(int _nums){
  int _count_of_factors=0;
  
  for(int itr=1; itr<=sqrt(_nums); itr++){
    if(_nums%itr == 0){
      if(_nums%itr == itr){
        _count_of_factors++;
      }else{
        _count_of_factors += 2;
      }
    }
  }

  return _count_of_factors;
}


int main(){
  CountFactors_2 *c;
  std::cout << "Total factors of 6 : " << c->_countFactors(6) << std::endl;

  return 0;
}