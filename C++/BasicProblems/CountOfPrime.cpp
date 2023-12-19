/*
You will be given an integer n. You need to 
return the count of prime numbers less than 
or equal to n.
*/

#include <iostream>
#include <math.h>

class CountOfPrime{
public:
  CountOfPrime(){}
  ~CountOfPrime(){}
  int count_prime(int x);
};

int CountOfPrime::count_prime(int x){
  if(x == 1){
    return 0;
  }

  int count = 0;

  for(int i=2; i<=x; i++){
    bool flag = true;
    for(int j=2; j<=sqrt(i); j++){
      if(i%j == 0){
        flag = false;
        break;
      }
    }
    if(flag){
      count++;
    }
  }
  return count;
}

int main(){
  CountOfPrime *c = new CountOfPrime();
  std::cout << "Total count of prime : " << c->count_prime(19) << std::endl;
  return 0;
}