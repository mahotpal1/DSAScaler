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
  virtual int countFactors2(int A) = 0;
};

#endif