/*Given a number A. Return square root of the number if it is perfect square otherwise return -1.

Note: A number is a perfect square if its square root is an integer. */

#include <iostream>

class SquareRoot{
public: 
  SquareRoot(){}
  int _solve(int _num);
  ~SquareRoot(){}
};

int SquareRoot::_solve(int _num){
  int itr = 1;
  while(itr*itr < _num){
    itr++;
  }
  if(itr*itr == _num){
    return itr;
  }else{
    return -1;
  }
}


int main(){
  SquareRoot *s = new SquareRoot();
  std::cout << "Perfect Square root of 144 : " << s->_solve(144) << std::endl;
  std::cout << "Perfect Square root of 6 : " << s->_solve(6) << std::endl;

  return 1;
}