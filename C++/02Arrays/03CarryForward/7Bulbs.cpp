/*
A wire connects N light bulbs.
Each bulb has a switch associated with it; however, due to faulty wiring, 
a switch also changes the state of all the bulbs to the right of the current bulb.
Given an initial state of all bulbs, find the minimum number of switches you
have to press to turn on all the bulbs.

You can press the same switch multiple times.

Note: 0 represents the bulb is off and 1 represents the bulb is on.

Say the bulb is ON initially, after pressing the switch even number of times, what will be the final state of the bulb? ON

Say the bulb is ON initially, after pressing the switch odd number of times, what will be the final state of the bulb? ON

Example Input
Input 1:

 A = [0, 1, 0, 1]
Input 2:

 A = [1, 1, 1, 1]


Example Output
Output 1:

 4
Output 2:

 0
*/

#include <iostream>
#include <vector>

class Bulbs{
  public : 
    Bulbs(){}
    ~Bulbs(){}
    int solve(std::vector<int> &arr);
};

int Bulbs::solve(std::vector<int> &arr){
  int _count=0;
  for(int i=0; i<arr.size(); i++){
    if(_count%2 == 0){
      if(arr[i] == 0){
        _count++;
      }
    }else {
      if(arr[i] == 1){
        _count++;
      }
    }
  }
  return _count;
}

int main(){
  Bulbs *b = new Bulbs();
  std::vector<int> arr{0, 1, 0, 1};
  std::cout << "Minimum Prese for vals {} : " << b->solve(arr) << std::endl;

  return 0;
}