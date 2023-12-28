/*
Given a number A. Return 1 if A is prime and return 0 if not.
*/
#include <iostream>
#include <math.h>
#include "Solution.h"

class PrimeNumber: public Solution
{
public:
  PrimeNumber(){};
  int isPrime(int _nums);
  ~PrimeNumber(){};
};

int PrimeNumber::isPrime(int _nums){
  if(_nums == 1){
    return 0;
  }
  for(int i=2; i<=sqrt(_nums); i++){
    if(_nums%i == 0){
      return 0;
    }
  }
  return 1;
}

int main(){
  PrimeNumber *p = new PrimeNumber();
  std::cout << "Is 11 a prime number : " <<  p->isPrime(11) << std::endl;
  std::cout << "Is 6 a prime number : " << p->isPrime(6) << std::endl;
  return 0;
}