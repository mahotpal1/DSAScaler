/*
You are given an integer A. You have to tell whether it is a perfect number or not.
Perfect number is a positive integer which is equal to the sum of its proper positive divisors.
A proper divisor of a natural number is the divisor that is strictly less than the number.
*/
#include <math.h>
#include <iostream>

class PerfectNumbers{
public :
  PerfectNumbers(){
  }
  int _sumOfFactors(int _num);
  ~PerfectNumbers(){}
};

int PerfectNumbers::_sumOfFactors(int _num){
  if(_num == 1){
    return 0;
  }
  int count=1;
  for (int i = 2; i < sqrt(_num); i++)
  {
    if(i*i == sqrt(_num)){
      count += sqrt(_num);
    }
    if(_num%i == 0){
      if(i == _num/i){
        count += i;
      }else{
        count += _num/i + i;
      }
    }
  }
  return count;
}


int main(){
  PerfectNumbers *p = new PerfectNumbers();
  std::cout << "Is 4 a perfect number ? " << ((p->_sumOfFactors(4)==4)?"Yes":"No") << std::endl;
  std::cout << "Is 6 a perfect number ? " << ((p->_sumOfFactors(6)==6)?"Yes":"No") << std::endl;
  std::cout << "Is 1 a perfect number ? " << ((p->_sumOfFactors(1)==1)?"Yes":"No") << std::endl;
  std::cout << "Is 2 a perfect number ? " << ((p->_sumOfFactors(2)==2)?"Yes":"No") << std::endl;
  return 0;
}