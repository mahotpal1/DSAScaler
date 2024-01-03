/*
You're given a read-only array of N integers. Find out if any integer 
occurs more than N/3 times in the array in linear time and constant additional space.
If so, return the integer. If not, return -1.

If there are multiple solutions, return any one.

Note: Read-only array means that the input array should not be modified
in the process of solving the problem

Example Input
Input 1:
[1 2 3 1 1]
Input 2:
[1 2 3]


Example Output
Output 1:
1
Output 2:
-1
*/
#include <vector>
#include <iostream>

class MajorityElement{
  public : 
    MajorityElement(){}
    ~MajorityElement(){}
    int solve(std::vector<int> &arr);
};

int MajorityElement::solve(std::vector<int> &A){
  long _count1=0, _count2=0;
    int _maj1 = -1, _maj2=-2;
    for(int i=0; i<A.size(); i++){
        if((_count1==0 && A[i]!=_maj2)||A[i]==_maj1){
            _maj1=A[i];
            _count1++;
        }else if((_count2==0 && A[i]!=_maj1)||A[i]==_maj2){
            _maj2=A[i];
            _count2++;
        }else{
            _count1--;
            _count2--;
        }
    }
    _count1=0;_count2=0;
    for(auto x: A){
        if(x == _maj1){
            _count1++;
        }
        if(x == _maj2){
            _count2++;
        }
    }
    if(_count1 > (A.size()/3)){
        return _maj1;
    }
    if(_count2 > (A.size()/3)){
        return _maj2;
    }
    return -1;
}

int main(){
  std::vector<int> arr{1, 2, 3, 1, 1};
  MajorityElement *m = new MajorityElement();
  std::cout << "After performing opertion : " << m->solve(arr) << std::endl; 
  return 0;
}