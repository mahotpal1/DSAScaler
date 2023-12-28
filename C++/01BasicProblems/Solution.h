/*
  General Interface for All functionalities. 
*/

#ifndef _SOLUTION_H
#define _SOLUTION_H

#include <iostream>

using namespace std;

class Solution{
public:
  Solution(){}
  virtual ~Solution(){}
  int _countFactors(int A);
  int isPrime(int _nums);
};

#endif