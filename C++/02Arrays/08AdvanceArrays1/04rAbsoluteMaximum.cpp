/*
Given 4 array of integers A, B, C and D of same size, 
find and return the maximum value of 
| A [ i ] - A [ j ] | + | B [ i ] - B [ j ] | + | C [ i ] - C [ j ] | + | D [ i ] - D [ j ] | + | i - j| 
where i != j and |x| denotes the absolute value of x.

Example Input
Input 1:
 A = [1, 2, 3, 4]
 B = [-1, 4, 5, 6]
 C = [-10, 5, 3, -8]
 D = [-1, -9, -6, -10]
Input 2:
 A = [1, 2]
 B = [3, 6]
 C = [10, 11]
 D = [1, 6]

Output 1:
 30
Output 2:
 11
*/
#include <iostream>
#include <vector>

using namespace std;

class AbsoluteMaximum{
  public :
    AbsoluteMaximum(){}
    ~AbsoluteMaximum(){}
    int solve(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D);
};

int AbsoluteMaximum::solve(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D) {
    vector<int> maxC(16, INT_MIN);
    vector<int> minC(16, INT_MAX);

    vector<int> sign{1,-1};  

    for(int i=0; i<A.size(); i++){
        int j=0;
        for(int a=0; a<sign.size(); a++){
            for(int b=0; b<sign.size(); b++){
                for(int c=0; c<sign.size(); c++){
                    for(int d=0; d<sign.size(); d++){
                        int curr = sign[a]*A[i] + sign[b]*B[i] + sign[c]*C[i]+ sign[d]*D[i]  + i ;
                       
                        maxC[j]= max(maxC[j], curr) ;
                        minC[j]= min(minC[j], curr) ;
                        j++;
                    }
                }
            }
        }
    }
    int result=0;
    for(int i=0; i<maxC.size(); i++){
        result = max(result, maxC[i]-minC[i]);
    }
    return result;
}

int main(){
  vector<int> A{1, 2, 3, 4};
  vector<int> B{-1, 4, 5, 6};
  vector<int> C{-10, 5, 3, -8};
  vector<int> D{-1, -9, -6, -10};
  
  AbsoluteMaximum *m = new AbsoluteMaximum();
  cout << "Absolute Maximum : " << m->solve(A, B, C, D) << std::endl;

  return 0;
}