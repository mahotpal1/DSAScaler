/*
Given an array of integers A, find and return the product array of
the same size where the ith element of the product array will be 
equal to the product of all the elements divided by the ith element
of the array.
Note: It is always possible to form the product array with integer 
(32 bit) values. Solve it without using the division operator.
*/

#include <iostream>
#include <vector>

class ProductArrayPuzzle{
public :
    ProductArrayPuzzle(){};
    ~ProductArrayPuzzle(){};
    std::vector<int> solve(std::vector<int> &arr);
};

std::vector<int> ProductArrayPuzzle::solve(std::vector<int> &arr){
    std::vector<int> ans(arr.size());
    int product=1
    for(auto x: arr){
        product *= x; 
    }
    for(int i=0; i<arr.size(); i++){
        ans[i] = product/arr[i];
    }
    return ans;
}

int main(){
    ProductArrayPuzzle *p = new ProductArrayPuzzle();
    std::cout << "The required resultant arra : " << std::endl;
    std::vector<int> arr{1, 2, 3, 4, 5};
    for(auto x: p->solve(arr)){
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}